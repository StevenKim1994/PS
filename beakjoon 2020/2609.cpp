#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(int a, int b)
{
	vector<int> answer;

	int la = a;
	int lb = b;
	
	// GCD
	while(true)
	{
		
		if(b != 0)
		{
			int r = a % b;
			a = b;
			b = r;
		}
		else // if(b == 0)
		{
			answer.push_back(a);
			break;
		}
		
	}

	// LCM
	answer.push_back(a * (la / a) * (lb / a));

	return answer;
}


int main()
{
	int a, b;
	vector<int> answer;
	cin >> a >> b;

	answer = solution(a, b);

	for (int i = 0; i < answer.size(); i++)
		cout << answer[i] << '\n';
	
	return 0;
}