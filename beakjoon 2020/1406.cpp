#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{
	string inputStr;
	list<char> listStr;
	int cursorPos = 0;
	int queryNum;
	char insertData;
	char queryData;
	
	cin >> inputStr;

	for(int i=0; i<inputStr.length(); i++)
	{
		listStr.push_back(inputStr[i]);
		cursorPos++;
	}

	cin >> queryNum;

	for(int i = 0 ; i< queryNum; i++)
	{
		cin >> queryData;

		if(queryData == 'P')
		{
			cin >> insertData;
			list<char>::iterator iter = listStr.begin();

			for (int j = 0; j < cursorPos; j++)
				iter++;
			
			listStr.insert(iter,insertData);
		
		}
		else if(queryData == 'L')
		{
			if (cursorPos > 0)
				cursorPos--;
			
		}
		else if(queryData == 'B')
		{
			if(cursorPos > 0)
			{
				auto iter = listStr.begin();

				for(int i =0; i<cursorPos-1; i++)
				{
					iter++;
					iter = listStr.erase(iter);
				}

				cursorPos++;
			}
		}
		else if(queryData == 'D')
		{
			if (cursorPos < listStr.size())
				cursorPos++;
		}

	}

	for(auto iter : listStr)
	{
		cout << iter;
	}
	return 0;
}