#include <iostream>
#include <algorithm>
#include <deque>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int operatorNum;
	deque<int> myDeque;
	vector<int> answers;
	string inputData;
	int inputNumber;
	cin >> operatorNum;

	for (int i = 0; i < operatorNum; i++)
	{
		cin >> inputData;

		if (inputData == "push_back")
		{
			cin >> inputNumber;
			myDeque.push_back(inputNumber);
		}

		else if (inputData == "push_front")
		{
			cin >> inputNumber;
			myDeque.push_front(inputNumber);
		}

		else if (inputData == "front")
		{
			if (myDeque.size() > 0)
				answers.push_back(myDeque.front());
			else
				answers.push_back(-1);
		}
		else if (inputData == "back")
		{
			if (myDeque.size() > 0)
				answers.push_back(myDeque.back());
			else
				answers.push_back(-1);
		}
		else if (inputData == "size")
		{
			answers.push_back(myDeque.size());
		}
		else if (inputData == "empty")
		{
			if (myDeque.empty())
				answers.push_back(1);
			else
				answers.push_back(0);
		}
		else if (inputData == "pop_front")
		{
			if (myDeque.size() > 0)
			{
				answers.push_back(myDeque.front());
				myDeque.pop_front();
			}
			else
				answers.push_back(-1);

		}
		else if (inputData == "pop_back")
		{
			if (myDeque.size() > 0)
			{
				answers.push_back(myDeque.back());
				myDeque.pop_back();
			}
			else
				answers.push_back(-1);

		}
	}

	for (int i = 0; i < answers.size(); i++)
		cout << answers[i] << '\n';

	return 0;
}