#include <bits/stdc++.h>
using namespace std;

vector<int> help(vector<int> &a, vector<int> &b, vector<int> &c)
{
    map<int, int> m;
    for (int i = 0; i < a.size(); i++)
        m[a[i]]++;
    for (int i = 0; i < b.size(); i++)
        m[b[i]]++;
    for (int i = 0; i < c.size(); i++)
        m[c[i]]++;
    vector<int> ans;
    for (auto it : m)
    {
        if (it.second == 3)
            ans.push_back(it.first);
    }
    return ans;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5}, arr2 = {1, 2, 5, 7, 9}, arr3 = {1, 3, 4, 5, 8};
    vector<int> ans = help(arr1, arr2, arr3);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}