#include <bits/stdc++.h>

using namespace std;

int maxCount(int m, int n, vector<vector<int>> &ops)
{
    vector<vector<int>> matrix(m, std::vector<int>(n, 0));
    int maxVal = 0;
    for (const auto &op : ops)
    {
        int row = op[0];
        int col = op[1];
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                matrix[i][j]++;
                maxVal = std::max(maxVal, matrix[i][j]);
            }
        }
    }
    int count = 0;
    for (const auto &row : matrix)
    {
        for (int num : row)
        {
            if (num == maxVal)
            {
                count++;
            }
        }
    }

    return count;
}

int main()
{
    int m = 3;
    int n = 3;
    vector<vector<int>> ops = {{2, 2}, {3, 3}};
    cout << maxCount(m, n, ops);
    return 0;
}