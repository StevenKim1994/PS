#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> inputList)
{
	vector<int> answers;
	vector<int> temp = inputList;

	prev_permutation(inputList.begin(), inputList.end());

	if (inputList[0] > temp[0])
		answers.push_back(-1);

	else if (inputList[0] == temp[0] && inputList.size() == 1)
		answers.push_back(-1);

	else
	{
		for (int i = 0; i < inputList.size(); i++)
			answers.push_back(inputList[i]);
	}

	return answers;
}

int main()
{
	vector<int> inputList;
	int inputData;
	int N;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> inputData;
		inputList.push_back(inputData);
	}

	inputList = solution(inputList);

	for (int i = 0; i < inputList.size(); i++)
		cout << inputList[i] << " ";

	return 0;
}