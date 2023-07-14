#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> multiply(vector<vector<int>> &mat1, vector<vector<int>> &mat2)
{
    int m = mat1.size();
    int k = mat1[0].size();
    int n = mat2[0].size();

    vector<vector<int>> result(m, vector<int>(n, 0));

    unordered_map<int, unordered_map<int, int>> mat2Map;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat2[i][j] != 0)
            {
                mat2Map[j][i] = mat2[i][j];
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat1[i][j] != 0)
            {
                for (auto it = mat2Map[j].begin(); it != mat2Map[j].end(); it++)
                {
                    result[i][it->first] += mat1[i][j] * it->second;
                }
            }
        }
    }

    return result;
}

int main()
{
    vector<vector<int>> mat1 = {
        {1, 0, 0},
        {-1, 0, 3}};
    vector<vector<int>> mat2 = {
        {7, 0, 0},
        {0, 0, 0},
        {0, 0, 1}};

    vector<vector<int>> result = multiply(mat1, mat2);

    for (const auto &row : result)
    {
        for (int num : row)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
