#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, l, h;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cin >> l >> h;
    vector<vector<int>> ans;
    int flag = 0;
    if (arr[0] != l)
        ans.push_back({l, arr[0] - 1});
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] + 1 != arr[i])
        {
            ans.push_back({arr[i - 1] + 1, arr[i] - 1});
        }
    }
    if (arr[n - 1] != h)
        ans.push_back({arr[n - 1] + 1, h});
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i][0] << " " << ans[i][1] << endl;
}