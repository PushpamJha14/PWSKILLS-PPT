#include <bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int> &a, int x)
{
    int n = a.size();
    int y = INT_MAX;
    int ans = 0;
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 2; i++)
    {
        int j = i + 1, k = n - 1;
        while (j < k)
        {
            int sum = a[i] + a[j] + a[k];
            int diff = abs(sum - x);
            if (diff < y)
            {
                y = diff;
                ans = sum;
            }
            if (sum < x)
            {
                j++;
            }
            else
                k--;
        }
    }
    // cout<<y;
    return ans;
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
    cout << threeSumClosest(nums, target);
}