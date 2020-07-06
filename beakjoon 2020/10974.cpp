#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> solution(int n)
{
	vector<vector<int>> answers;
	vector<int> inputData;
	for (int i = 0; i < n; i++)
		inputData.push_back(i + 1);

	do
	{
		answers.push_back(inputData);
	} while (next_permutation(inputData.begin(), inputData.end()));
	
	return answers;
}

int main()
{
	int N;

	cin >> N;

	vector<vector<int>> answers = solution(N);

	for(int i= 0; i<answers.size(); i++)
	{
		for(int j = 0; j < answers[i].size(); j++)
		{
			cout << answers[i][j] << " ";
		}

		cout << '\n';
	}

	return 0;
}