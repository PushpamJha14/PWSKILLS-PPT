#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7, 8};
    int m = 4, n = 2;
    vector<vector<int>> ans(m, vector<int>(n, 0));
    for (int i = 0; i < arr1.size(); i++)
    {
        ans[i / n][i % n] = arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}