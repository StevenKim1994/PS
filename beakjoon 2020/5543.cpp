#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> menus, vector<int> sodas)
{
	return *min_element(menus.begin(), menus.end()) + *min_element(sodas.begin(), sodas.end()) - 50;
}

int main()
{
	vector<int> menus;
	vector<int> sodas;
	int inputData;
	for (int i = 0; i < 3; i++)
	{
		cin >> inputData;
		menus.push_back(inputData);
	}

	for (int i = 0; i < 2; i++)
	{
		cin >> inputData;
		sodas.push_back(inputData);
	}

	cout << solution(menus,sodas) << '\n';

	return 0;
}