#include <iostream>
#include <vector>
using namespace std;

int prime[1000100];
bool check[1000100];
int primeNum = 0;

void erato()
{
	for(int i=2; i<= 1000000; i++)
	{
		if(check[i] == false)
		{
			prime[primeNum++] = i;
			for(int j = i+i ; j<= 1000000; j+=i)
			{
				check[j] = true;
			}
		}
	}
}



vector<vector<int>> solution(vector<int> inputData) //1000000 이하의 크기의 값이 테스트케이스로 들어온다. 그럼 1000000 이하까지 소수를 에라토스테네스체로 구하자! 
{
	vector<vector<int>> answers;
	vector<int> answer;

	for(int i = 0; i<inputData.size(); i++)
	{
		answer.push_back(inputData[i]);

		for(int g = 1; g<primeNum;g++)
		{
			if(check[inputData[i] - prime[g]] == false) // n이랑 어떤 홀수를 뻇을떄 나온 값이 홀수라면 그값이 우리가 구하고자하는 해다.
			{
				answer.push_back(prime[g]);
				answer.push_back(inputData[i] - prime[g]);
				break; // 찾앗으니 멈추면됨 .. 이거 떄매 런타임에러뜸
			}
		}

		answers.push_back(answer);
		answer.clear();
	}

	return answers;
}

int main()
{
	erato(); // 소수 구하기	
	int input;
	vector<int> inputList;
	
	while(true)
	{
		cin >> input;
		if (input == 0)
			break;

		inputList.push_back(input);
	}
	
	vector<vector<int>> answers = solution(inputList);

	for(int i = 0; i<answers.size(); i++)
		cout << answers[i][0] << " = " << answers[i][1] << " + " << answers[i][2] << '\n';
	
	return 0;
}