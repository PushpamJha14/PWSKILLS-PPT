#include <bits/stdc++.h>
using namespace std;

bool help(vector<int> &nums)
{
    unordered_set<int> s;
    for (auto &it : nums)
    {
        if (s.count(it))
            return 1;
        s.insert(it);
    }
    return 0;
}

int main()
{
    int n;
    vector<int> nums;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cout << help(nums);
}