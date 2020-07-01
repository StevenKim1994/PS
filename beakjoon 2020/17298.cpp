#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <utility>

using namespace std;

stack<pair<int,int>> processStack;

vector<int> solution(vector<int> inputData)
{
	vector<int> answer;
	
	for (int i = 0; i < inputData.size(); i++)
	{
		if (processStack.size() == 1)
		{
			pair<int, int> temp = processStack.top();
		}
		else
		{

		}

	}

	// stack을 써서 이전 값 기억 후 비교 ? 이건 예외가 잇을듯? 이걸 처리해야할뜻

	// 일단 맨 마지막번째 수의 오큰수는 무조건 -1일 것이다..

	return answer;
}

int main()
{
	int N, input;
	vector<int> A;

	cin >> N;

	for(int i = 0; i<N; i++)
	{
		cin >> input;
		A.push_back(input);
	}

	A = solution(A);

	for(int i =0 ;i<A.size(); i++)
	{
		cout << A[i] << " ";
	}


	return 0;
}