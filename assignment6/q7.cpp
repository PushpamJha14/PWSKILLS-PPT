#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> generateMatrix(int n)
{
    int num = 1;
    int rowStart = 0, rowEnd = n - 1;
    int colStart = 0, colEnd = n - 1;
    vector<vector<int>> result(n, vector<int>(n, 0));

    while (true)
    {
        // Fill top row
        for (int j = colStart; j <= colEnd; j++)
        {
            result[rowStart][j] = num;
            num++;
        }
        rowStart++;

        if (rowStart > rowEnd || colStart > colEnd)
        {
            break;
        }

        // Fill right column
        for (int i = rowStart; i <= rowEnd; i++)
        {
            result[i][colEnd] = num;
            num++;
        }
        colEnd--;

        if (rowStart > rowEnd || colStart > colEnd)
        {
            break;
        }

        // Fill bottom row
        for (int j = colEnd; j >= colStart; j--)
        {
            result[rowEnd][j] = num;
            num++;
        }
        rowEnd--;

        if (rowStart > rowEnd || colStart > colEnd)
        {
            break;
        }

        // Fill left column
        for (int i = rowEnd; i >= rowStart; i--)
        {
            result[i][colStart] = num;
            num++;
        }
        colStart++;
    }

    return result;
}

int main()
{
    int n = 3;
    vector<vector<int>> result = generateMatrix(n);

    // Print the generated matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
