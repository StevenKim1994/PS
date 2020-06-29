#include <iostream>
#include <queue>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int operatorNum;
	int inputData;
	queue<int> myQueue;
	string inputOper;
	vector<int> answers;
	cin >> operatorNum;

	for (int i = 0; i < operatorNum; i++)
	{
		cin >> inputOper;
		
		if (inputOper == "push")
		{
			cin >> inputData;
			myQueue.push(inputData);
		}
		else if (inputOper == "front")
		{
			if (myQueue.size() > 0)
				answers.push_back(myQueue.front());//cout << myQueue.front() << '\n';
			else
				answers.push_back(-1);//cout << "-1" << '\n';
		}
		else if (inputOper == "back")
		{
			if (myQueue.size() > 0)
				answers.push_back(myQueue.back());//cout << myQueue.back() << '\n';
			else
				answers.push_back(-1);//cout << "-1" << '\n';

		}
		else if (inputOper == "size")
		{
			answers.push_back(myQueue.size());//cout << myQueue.size() << '\n';
		}
		else if (inputOper == "empty")
		{
			if (myQueue.empty())
				answers.push_back(1);//cout << -1 << '\n';
			else
				answers.push_back(0);//cout << 0 << '\n';
		}
		else if (inputOper == "pop")
		{
			if (myQueue.size() > 0)
			{
				answers.push_back(myQueue.front());//cout << myQueue.front() << '\n';
				myQueue.pop();
			}
			else
				answers.push_back(-1);//cout << -1 << '\n';
		}
	}

	for (int i = 0; i < answers.size(); i++)
		cout << answers[i] << '\n';

	return 0;
}