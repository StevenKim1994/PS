#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
vector<char> solution(vector<int> inputData, int n)
{
	vector<char> answer;
	stack<int> processStack;
	int pos = 0; // inputData index 저장하는 변수

	for(int i = 0; i<n; i++)
	{
		processStack.push(i + 1);
		answer.push_back('+');

		while(processStack.size() && processStack.top() == inputData[pos])
		{			
			pos++;
			processStack.pop();
			answer.push_back('-');	
		}
		
	}

	if(processStack.size()) // 스택에 값이 아직 남아 있다면 NO
	{
		cout << "NO" <<'\n';
		vector<char> empty;
		return empty;
	}
	
	return answer;
}


int main()
{
	vector<int> inputData;
	int n, input;

	cin >> n;

	for(int i = 0; i<n; i++)
	{
		cin >> input;
		inputData.push_back(input);
	}

	vector<char> output =solution(inputData, n);

	for (int i = 0; i < output.size(); i++)
		cout << output[i]<<'\n';
		
	return 0;
}