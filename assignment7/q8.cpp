#include <bits/stdc++.h>

using namespace std;

bool help(vector<pair<int, int>> &v)
{
    int n = v.size();
    sort(v.begin(), v.end());
    int ans = 1, en = v[0].first;
    for (int i = 1; i < n; i++)
    {
        if (en < v[i].second)
        {
            ans++;
            en = v[i].first;
        }
    }
    if (ans == n)
        return 1;
    return 0;
}

int main()
{
    int n;
    vector<pair<int, int>> nums;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        // cout << x << " " << y << " ";
        nums.push_back({y, x});
    }
    cout << help(nums);
}