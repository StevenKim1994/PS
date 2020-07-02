#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

vector<int> solution(vector<int> inputNumbers, vector<int> inputOper)
{
	vector<int> answers;
	vector<char> tempOper;

	for (int i = 0; i<inputOper.size(); i++)
	{
		if (i == 0)
			for (int j = 0; j < inputOper[i]; j++)
				tempOper.push_back('+');

		else if (i == 1)
			for (int j = 0; j < inputOper[i]; j++)
				tempOper.push_back('-');

		else if (i == 2)
			for (int j = 0; j < inputOper[i]; j++)
				tempOper.push_back('*');

		else if (i == 3)
			for (int j = 0; j < inputOper[i]; j++)
				tempOper.push_back('/');	
	}

	do
	{
		int operNum = 0;
		for (int i = 0; i < inputNumbers.size(); i++)
		{
			cout << inputNumbers[i];

			if (operNum < tempOper.size())
			{ 
				cout << tempOper[operNum];
				
				operNum++;
			}

		} // 구할수 있는 식의 조합은 구했다 이걸 계산하면됨 ㅇㅇ
		
		cout << '\n';

		

	
	} while (next_permutation(tempOper.begin(), tempOper.end()));



	return answers;
}


int main()
{
	int N;
	vector<int> numbers;
	vector<int> operators;
	int inputNumbers;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> inputNumbers;
		numbers.push_back(inputNumbers);
	}

	for (int i = 0; i < 4; i++)  // 0 : + , 1 : - , 2 : * , 3 : /
	{
		cin >> inputNumbers;
		operators.push_back(inputNumbers);
	}
	
	numbers = solution(numbers,operators);

	for (int i = 0; i < numbers.size(); i++)
		cout << numbers[i] << '\n';
	



	return 0;
}
