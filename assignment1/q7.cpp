#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int i = 0, j = 0;
    if (nums.size() <= 1)
        return;
    while (i < nums.size())
    {
        if (nums[i] == 0)
        {
            j = i;
            while (i < nums.size() && nums[i] == 0)
                i++;
            if (i >= nums.size())
                return;
            else
            {
                swap(nums[i], nums[j]);
                // cout<<"a"<<i<<" "<<j<<"a";
                i = j;
                i++;
            }
        }
        else
            i++;
    }
    return;
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
    moveZeroes(nums);
}