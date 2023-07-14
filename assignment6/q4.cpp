#include <bits/stdc++.h>
using namespace std;

int findMaxLength(vector<int> &nums)
{
    int n = nums.size();
    unordered_map<int, int> countMap;
    int maxLen = 0;
    int count = 0;

    // Initialize countMap with an entry (0, -1) to handle starting from index 0
    countMap[0] = -1;

    for (int i = 0; i < n; i++)
    {
        count += (nums[i] == 0) ? -1 : 1;

        if (countMap.find(count) != countMap.end())
        {
            maxLen = max(maxLen, i - countMap[count]);
        }
        else
        {
            countMap[count] = i;
        }
    }

    return maxLen;
}

int main()
{
    vector<int> nums1 = {0, 1};
    cout << findMaxLength(nums1) << endl; // 2

    vector<int> nums2 = {0, 1, 0};
    cout << findMaxLength(nums2) << endl; // 2

    vector<int> nums3 = {0, 0, 1, 0, 0, 0, 1, 1};
    cout << findMaxLength(nums3) << endl; // 6

    return 0;
}
