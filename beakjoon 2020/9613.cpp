#include <iostream>
#include <vector>

using namespace std;

int GCD(int a, int b)
{
	while(b != 0)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

vector<long long> solution(vector<vector<int>> inputData)
{
	vector<long long> answers;
	
	for(int i = 0; i<inputData.size(); i++)
	{
		long long sum = 0;
		for(int j = 0; j<inputData[i].size() -1; j++)
		{
			for(int k = j +1; k< inputData[i].size(); k++)
			{
				sum += GCD(inputData[i][j], inputData[i][k]);
			}
		}
		answers.push_back(sum);
	}

	return answers;
}


int main()
{
	int t, n, input;
	vector<vector<int>> inputData;
	cin >> t;

	for(int i = 0; i< t; i++)
	{
		vector<int> inputList;
		int n;
		cin >> n;
		for(int j = 0; j< n;j++)
		{
			cin >> input;
			inputList.push_back(input);
		}

		inputData.push_back(inputList);
	}

	vector<long long> answers = solution(inputData);

	for (int i = 0; i < answers.size(); i++)
		cout << answers[i] << '\n';

	return 0;
}