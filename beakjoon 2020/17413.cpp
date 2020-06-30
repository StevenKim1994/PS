#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;


vector<string> solution(vector<string> inputStr)
{
	vector<string> answer;
	stack<char> processStack;

	for (int i = 0; i < inputStr.size(); i++)
	{
		string processStr="";
		bool check = false;
		for (int j = 0; j < inputStr[i].size(); j++)
		{
			if(inputStr[i][j] == '<')
			{

				while (!processStack.empty())
				{
					processStr += processStack.top();
					processStack.pop();
				}
				
				check = true;
				processStr += inputStr[i][j];
			}
			else if(inputStr[i][j] =='>')
			{
				processStr += inputStr[i][j];
				check = false;
			}
			else if( check == false)
			{
				if(inputStr[i][j] == ' ')
				{
					while (!processStack.empty())
					{
						processStr += processStack.top();
						processStack.pop();
					}
					processStr += inputStr[i][j];
				}
				else
					processStack.push(inputStr[i][j]);
			}
			else if( check == true && inputStr[i][j] == ' ')
			{
				processStr += inputStr[i][j];
			}

			else
			{
				processStr += inputStr[i][j];
			}
		}
		
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
		if (i == inputData.length()-1)
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