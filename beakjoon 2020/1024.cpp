#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	long long N, L;
	vector<vector<int>> sq_list;

	cin >> N >> L;

	for(long long i = 0;i<N;i++)
	{
		vector<int> save;
		for(long long j = 0; j<N; j++)
		{
			if(i + j == N)
			{
				save.push_back(i);
				save.push_back(j);
			}
		}
		sort(save.begin(), save.end());
		save.erase(unique(save.begin(), save.end()), save.end());

		if(save.size() >= L)
			sq_list.push_back(save);
	}

	if (sq_list.size() >= 100)
		cout << -1 << '\n';

	else
	{
		for(int i = 0; i<sq_list.size(); i++)
		{
			for(int j =0; j<sq_list[i].size(); j++)
			{
				cout << sq_list[i][j] << " ";
			}
			cout << '\n';
		}
	}


	return 0;
}