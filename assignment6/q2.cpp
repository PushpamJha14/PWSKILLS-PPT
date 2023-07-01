#include <bits/stdc++.h>

using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int t)
{
    int n = matrix.size();
    int m = matrix[0].size();
    int l = 0, h = m * n - 1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (matrix[mid / m][mid % m] == t)
            return true;
        else if (matrix[mid / m][mid % m] > t)
            h = mid - 1;
        else
            l = mid + 1;
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int t = 3;
    cout << searchMatrix(matrix, t);
}