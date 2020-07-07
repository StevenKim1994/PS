#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> inputData)
{
	int answer = 0;
	vector<int> sortList;
	// 총 블럭의 형태는 19가지
	
	for (int i = 0; i < inputData.size(); i++)
	{
		for (int j = 0; j < inputData[i].size(); j++)
		{
			int temp;
			if ((j + 3) < inputData[i].size()) // 만약 블럭이 ㅁㅁㅁㅁ 형태일때
			{
				temp = inputData[i][j] + inputData[i][j + 1] + inputData[i][j + 2] + inputData[i][j + 3]; // 하늘색 블럭 회전 안시킨 경우를 놓앗을경우
				sortList.push_back(temp);
			}
			else if ((i + 3) < inputData.size()) // 만약 블럭이 ㅁㅁㅁㅁ을 회전시킨 형태일때
			{
				temp = inputData[i][j] + inputData[i][j + 1] + inputData[i][j + 2] + inputData[i][j + 3];
				sortList.push_back(temp);
			}
			else if ((i + 2) < inputData.size() && (j + 2) < inputData[i].size()) // 노란색 블럭 검사함
			{																	  		
				temp = inputData[i][j] + inputData[i][j + 1] + inputData[i + 1][j] + inputData[i + 1][j + 1];
				sortList.push_back(temp);
			}
			else if ((i + 2) < inputData.size() && (j + 1) < inputData[i].size()) // 주황색, 초록색 블럭 회전 안시킨 경우 검사함, 분홍색 블럭 회전시킨 경우 검사함.
			{
				// 주황색 블럭 회전안시킨 경우
				temp = inputData[i][j] + inputData[i][j + 1] + inputData[i][j + 2] + inputData[i + 1][j + 1];
				sortList.push_back(temp);

				// 초록색 블럭 회전 안시킨 경우
				temp = inputData[i][j] + inputData[i + 1][j] + inputData[i + 1][j + 1] + inputData[i + 1][j + 2];
				sortList.push_back(temp);

				// 분홍색 블럭 좌회전 시킨 경우
				temp = inputData[i][j + 1] + inputData[i + 1][j + 1] + inputData[i + 1][j] + inputData[i + 2][j + 1];
				sortList.push_back(temp);

				// 분홍색 블럭 우회전 시킨 경우
				temp = inputData[i][j] + inputData[i + 1][j] + inputData[i + 2][j] + inputData[i + 1][j + 1];
				sortList.push_back(temp);

				// 분홍색 블럭 대칭시킨 경우
				temp = inputData[i][j + 1] + inputData[i + 1][j] + inputData[i + 1][j + 1] + inputData[i + 1][j + 2];
				sortList.push_back(temp);
			}
			else if ((i + 1) < inputData.size() && (j + 2) < inputData[i].size()) // 분홍색 블럭 회전 안시킨 경우 검사함, 주황색, 초록색 블럭 회전시킨 경우 검사함
			{
				// 분홍색 블럭 회전안시킨 경우

				// 주황색 블럭 좌회전 시킨 경우

				// 주황색 블럭 우회전 시킨 경우

				// 초록색 블럭 좌회전 시킨 경우

				// 초록색 블럭 우회전 시킨 경우

		
			}
		}
	}

	sort(sortList.begin(), sortList.end());

	answer = sortList[0];

	return answer;
}


int main()
{
	int N, M, input;
	vector<vector<int>> matrix;
	
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		vector<int> inputList;
		for (int j = 0; j < M; j++)
		{
			cin >> input;
			inputList.push_back(input);
		}
		matrix.push_back(inputList);
	}

	cout << solution(matrix) << '\n';

	return 0;
}