#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> inputData)
{
	vector<vector<int>> answers;

	for(int i = 0; i<inputData.size(); i++)
	{
		do
		{
			answers.push_back(inputData[i]);
		} while (next_permutation(inputData[i].begin(), inputData[i].end()));
	}
	
	return answers;
}

int main()
{
	vector<vector<int>> inputData;
	int k;
	while(true)
	{
		cin >> k;

		if (k == 0)
			break;

		vector<int> inputList;
		int input;
		for(int i = 0; i<k; i++)
		{
			cin >> input;
			inputList.push_back(input);
		}

		inputData.push_back(inputList);
	}

	inputData = solution(inputData);

	for (int i = 0; i < inputData.size();i++)
	{
		for(int j = 0; j<inputData[i].size(); j++)
		{
			cout << inputData[i][j] << " ";
		}

		cout << '\n';
		
	}

	

	return 0;
}