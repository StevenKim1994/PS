#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;




// < > 안 무시 예외처리 추가해야함.

vector<string> solution(vector<string> inputStr)
{
	vector<string> answer;
	stack<char> processStack;

	for (int i = 0; i < inputStr.size(); i++)
	{
		for (int j = 0; j < inputStr[i].size(); j++)
		{
			processStack.push(inputStr[i][j]);
		}
		
		string processStr="";
		while (!processStack.empty())
		{
			processStr += processStack.top();
			processStack.pop();
		}
		answer.push_back(processStr);
	}


	return answer;
}

int main()
{
	string inputData;
	vector<string> inputStr;
	getline(cin, inputData);
	inputData += '\n';
	
	string process="";
	for (int i = 0; i < inputData.length(); i++)
	{
		if (inputData[i] == ' ' || i == inputData.length()-1)
		{
			inputStr.push_back(process);
			process.clear();
		}
		else
		{
			process += inputData[i];
		}
	}

	inputStr = solution(inputStr);

	for (int i = 0; i < inputStr.size(); i++)
	{
		cout << inputStr[i] << " ";
	}

	return 0;
}