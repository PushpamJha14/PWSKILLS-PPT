#include <bits/stdc++.h>

using namespace std;

vector<int> rearrangeArray(vector<int> &nums)
{
    vector<int> result;
    int n = nums.size() / 2;

    for (int i = 0; i < n; i++)
    {
        result.push_back(nums[i]);
        result.push_back(nums[i + n]);
    }

    return result;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    vector<int> rearranged = rearrangeArray(nums);
    for (int num : rearranged)
    {
        cout << num << " ";
    }
    return 0;
}