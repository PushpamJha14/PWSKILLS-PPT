#include <bits/stdc++.h>

using namespace std;

int help(vector<int> &nums, int t)
{
    return lower_bound(nums.begin(), nums.end(), t) - nums.begin();
}

int main()
{
    int n, target;
    vector<int> nums;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cin >> target;
    cout << help(nums, target);
}