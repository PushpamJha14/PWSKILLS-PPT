#include <bits/stdc++.h>

using namespace std;

void nextPermutation(vector<int> &nums)
{
    int j, n = nums.size(), i = n - 2;
    while (i >= 0 && nums[i + 1] <= nums[i])
        i--;
    if (i > 0)
    {
        j = n - 1;
        while (j >= 0 && nums[j] <= nums[i])
        {
            j--;
        }
        swap(nums[i], nums[j]);
    }
    j = n - 1;
    i++;
    while (i < j)
    {
        swap(nums[i], nums[j]);
        i++;
        j--;
    }
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
    nextPermutation(nums);

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}