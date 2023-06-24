#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v, ans;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int t;
    cin >> t;
    sort(v.begin(), v.end());
    int l = 0, h = n - 1;
    while (l < h)
    {
        if (v[l] + v[h] == t)
        {
            ans.push_back(l);
            ans.push_back(h);
            break;
        }
        else if (v[l] + v[h] < t)
            l++;
        else
            h--;
    }
    cout << ans[0] << " " << ans[1];
}