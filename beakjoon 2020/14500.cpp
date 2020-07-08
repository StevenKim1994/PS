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
            if (j + 3 < inputData[i].size())
            {
                int temp = inputData[i][j] + inputData[i][j + 1] + inputData[i][j + 2] + inputData[i][j + 3];
                if (temp > answer)
                    answer = temp;
            }
            if (i + 3 < inputData.size()) {
                int temp = inputData[i][j] + inputData[i + 1][j] + inputData[i + 2][j] + inputData[i + 3][j];
                if (answer < temp) answer = temp;
            }
            if (i + 1 < inputData.size() && j + 2 < inputData[i].size()) {
                int temp = inputData[i][j] + inputData[i + 1][j] + inputData[i + 1][j + 1] + inputData[i + 1][j + 2];
                if (answer < temp) answer = temp;
            }
            if (i + 2 < inputData.size() && j + 1 < inputData[i].size()) {
                int temp = inputData[i][j] + inputData[i][j + 1] + inputData[i + 1][j] + inputData[i + 2][j];
                if (answer < temp) answer = temp;
            }
            if (i + 1 < inputData.size() && j + 2 < inputData[i].size()) {
                int temp = inputData[i][j] + inputData[i][j + 1] + inputData[i][j + 2] + inputData[i + 1][j + 2];
                if (answer < temp) answer = temp;
            }
            if (i + 2 < inputData.size() && j - 1 >= 0) {
                int temp = inputData[i][j] + inputData[i + 1][j] + inputData[i + 2][j] + inputData[i + 2][j - 1];
                if (answer < temp) answer = temp;
            }
            if (i - 1 >= 0 && j + 2 < inputData[i].size()) {
                int temp = inputData[i][j] + inputData[i][j + 1] + inputData[i][j + 2] + inputData[i - 1][j + 2];
                if (answer < temp) answer = temp;
            }
            if (i + 2 < inputData.size() && j + 1 < inputData[i].size()) {
                int temp = inputData[i][j] + inputData[i + 1][j] + inputData[i + 2][j] + inputData[i + 2][j + 1];
                if (answer < temp) answer = temp;
            }
            if (i + 1 < inputData.size() && j + 2 < inputData[i].size()) {
                int temp = inputData[i][j] + inputData[i][j + 1] + inputData[i][j + 2] + inputData[i + 1][j];
                if (answer < temp) answer = temp;
            }
            if (i + 2 < inputData.size() && j + 1 < inputData[i].size()) {
                int temp = inputData[i][j] + inputData[i][j + 1] + inputData[i + 1][j + 1] + inputData[i + 2][j + 1];
                if (answer < temp) answer = temp;
            }
            if (i + 1 < inputData.size() && j + 1 < inputData[i].size()) {
                int temp = inputData[i][j] + inputData[i][j + 1] + inputData[i + 1][j] + inputData[i + 1][j + 1];
                if (answer < temp) answer = temp;
            }
            if (i - 1 >= 0 && j + 2 < inputData[i].size()) {
                int temp = inputData[i][j] + inputData[i][j + 1] + inputData[i - 1][j + 1] + inputData[i - 1][j + 2];
                if (answer < temp) answer = temp;
            }
            if (i + 2 < inputData.size() && j + 1 < inputData[i].size()) {
                int temp = inputData[i][j] + inputData[i + 1][j] + inputData[i + 1][j + 1] + inputData[i + 2][j + 1];
                if (answer < temp) answer = temp;
            }
            if (i + 1 < inputData.size() && j + 2 < inputData[i].size()) {
                int temp = inputData[i][j] + inputData[i][j + 1] + inputData[i + 1][j + 1] + inputData[i + 1][j + 2];
                if (answer < temp) answer = temp;
            }
            if (i + 2 < inputData.size() && j - 1 >= 0) {
                int temp = inputData[i][j] + inputData[i + 1][j] + inputData[i + 1][j - 1] + inputData[i + 2][j - 1];
                if (answer < temp) answer = temp;
            }
            if (j + 2 < inputData[i].size()) {
                int temp = inputData[i][j] + inputData[i][j + 1] + inputData[i][j + 2];
                if (i - 1 >= 0) {
                    int temp2 = temp + inputData[i - 1][j + 1];
                    if (answer < temp2) answer = temp2;
                }
                if (i + 1 < inputData.size()) {
                    int temp2 = temp + inputData[i + 1][j + 1];
                    if (answer < temp2) answer = temp2;
                }
            }
            if (i + 2 < inputData.size()) {
                int temp = inputData[i][j] + inputData[i + 1][j] + inputData[i + 2][j];
                if (j + 1 < inputData[i].size()) {
                    int temp2 = temp + inputData[i + 1][j + 1];
                    if (answer < temp2) answer = temp2;
                }
                if (j - 1 >= 0) {
                    int temp2 = temp + inputData[i + 1][j - 1];
                    if (answer < temp2) answer = temp2;
                }
            }
        }

    }
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