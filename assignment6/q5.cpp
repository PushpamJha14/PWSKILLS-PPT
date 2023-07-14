#include <bits/stdc++.h>

using namespace std;

int minProductSum(vector<int> &nums1, vector<int> &nums2)
{
    int n = nums1.size();

    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end(), greater<int>());

    int minProductSum = 0;
    for (int i = 0; i < n; i++)
    {
        minProductSum += nums1[i] * nums2[i];
    }

    return minProductSum;
}

int main()
{
    vector<int> nums1 = {5, 2, 3, 4};
    vector<int> nums2 = {4, 2, 2, 5};
    cout << minProductSum(nums1, nums2) << endl;

    return 0;
}
