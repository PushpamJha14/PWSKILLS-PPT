#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> nums = {-4,
                        -1,
                        0,
                        3,
                        10};
    int n = nums.size(), i = 0, j = n - 1, k = n - 1;
    vector<int> ans(n);
    while (i < j)
    {
        if (abs(nums[i]) > abs(nums[j]))
        {
            ans[k] = nums[i] * nums[i];
            i++;
            k--;
        }
        else
        {
            ans[k] = nums[j] * nums[j];
            j--;
            k--;
        }
    }
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
}