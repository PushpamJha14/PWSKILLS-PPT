#include <bits/stdc++.h>

using namespace std;

int help(vector<int> &nums)
{
    int ans = 0;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        ans += nums[i];
        i++;
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 4, 3, 2};
    cout << help(nums);
}