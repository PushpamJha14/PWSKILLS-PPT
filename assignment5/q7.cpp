#include <bits/stdc++.h>

using namespace std;

int findMin(vector<int> &nums)
{
    int n = nums.size();
    int l = 0, h = n - 1, m;
    if (n == 1)
        return nums[0];
    while (l <= h)
    {
        if (nums[l] < nums[h])
            return nums[l];
        m = (l + h) / 2;
        if (m - 1 >= 0 && nums[m] < nums[m - 1])
            return nums[m];
        // if(m+1<n && nums[m]>nums[m+1])
        //     return nums[m+1];
        if (nums[n - 1] < nums[m])
            l = m + 1;
        else
            h = m - 1;
    }
    return nums[m];
}

int main()
{
    vector<int> ops = {3, 4, 5, 1, 2};
    cout << findMin(ops);
    return 0;
}