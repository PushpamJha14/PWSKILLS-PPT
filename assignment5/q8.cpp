#include <bits/stdc++.h>

using namespace std;

vector<int> findOriginalArray(vector<int> &a)
{
    if (a.size() % 2)
        return {};
    vector<int> res;
    sort(a.begin(), a.end());
    unordered_map<int, int> mp;
    for (int i = 0; i < a.size(); i++)
    {
        mp[a[i]]++;
    }
    for (int i = 0; i < a.size(); i++)
    {
        if (mp[a[i]] == 0)
            continue;
        if (mp[a[i] * 2] == 0)
            return {};
        res.push_back(a[i]);
        mp[a[i]]--;
        mp[a[i] * 2]--;
    }
    return res;
}

int main()
{
    vector<int> nums = {1, 3, 4, 2, 6, 8};
    vector<int> ans = findOriginalArray(nums);
    for (int num : ans)
    {
        cout << num << " ";
    }
    return 0;
}