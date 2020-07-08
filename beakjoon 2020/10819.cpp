#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int cal(vector<int> input)
{
	int result = 0;

	for(int i = 0; i<input.size()-1;i++)
	{
		result += abs(input[i] - input[i + 1]);
	}
	return result;
}

int solution(vector<int> inputData)
{
	sort(inputData.begin(), inputData.end());
	
	int answer = 0;
	
	do
	{
		int result = cal(inputData);

		if (answer < result)
			answer = result;

	} while (next_permutation(inputData.begin(), inputData.end()));

	return answer;
}

int main()
{
	int N, input;
	vector<int> inputList;
	cin >> N;

	for(int i = 0 ; i<N;i++)
	{
		cin >> input;
		inputList.push_back(input);
	}

	cout << solution(inputList) << '\n';

	return 0;
}