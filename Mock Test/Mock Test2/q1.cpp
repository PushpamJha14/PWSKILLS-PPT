#include <bits/stdc++.h>

using namespace std;

void moveZeros(std::vector<int> &nums)
{
    int n = nums.size();
    int nonZeroIndex = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            nums[nonZeroIndex++] = nums[i];
        }
    }

    while (nonZeroIndex < n)
    {
        nums[nonZeroIndex++] = 0;
    }
}

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12, 0, 1};
    moveZeros(nums);

    for (int num : nums)
    {
        std::cout << num << " ";
    }
    return 0;
}