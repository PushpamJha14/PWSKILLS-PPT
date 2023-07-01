#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v{4, 3, 2, 7, 8, 2, 3, 1};
    int n = v.size();
    for (int i = 0; i < v.size(); i++)
    {
        v[v[i] % n] += n;
    }
    vector<int> ans;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";

        if ((v[i] / n >= 2 && v[i] % n != 0) || (v[i] / n >= 3))
        {
            if (i == 0)
                ans.push_back(n);
            else
                ans.push_back(i);
        }
    }
    cout << endl;
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}