#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> help(vector<int> &arr1, vector<int> &arr2)
{
    unordered_set<int> s1, s2;
    for (int i = 0; i < arr1.size(); i++)
    {
        s1.insert(arr1[i]);
    }
    for (int i = 0; i < arr2.size(); i++)
    {
        s2.insert(arr2[i]);
        if (s1.find(arr2[i]) != s1.end())
            s1.erase(arr2[i]);
    }
    for (int i = 0; i < arr1.size(); i++)
    {
        if (s2.find(arr1[i]) != s2.end())
            s2.erase(arr1[i]);
    }
    vector<vector<int>> ans;
    vector<int> v1, v2;
    for (auto it : s1)
        v1.push_back(it);
    for (auto it : s2)
        v2.push_back(it);
    ans.push_back(v1);
    ans.push_back(v2);
    return ans;
}

int main()
{
    int n, target;
    vector<int> arr1 = {1, 2, 3}, arr2 = {2, 4, 6};
    vector<vector<int>> ans = help(arr1, arr2);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
}