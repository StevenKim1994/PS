#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> inputData)
{
	vector<int> answer;

	


	// vector를 i부터 돌아서 ? 찾는다?

	// list를 순회해서 찾는다?

	// stack을 써서 이전 값 기억 후 비교 ? 이건 예외가 잇을듯?

	// 일단 맨 마지막번째 수의 오큰수는 무조건 -1일 것이다..

	return answer;
}

int main()
{
	int N, input;
	vector<int> A;

	cin >> N;

	for(int i = 0; i<N; i++)
	{
		cin >> input;
		A.push_back(input);
	}

	A = solution(A);

	for(int i =0 ;i<A.size(); i++)
	{
		cout << A[i] << " ";
	}


	return 0;
}