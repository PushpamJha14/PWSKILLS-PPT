#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = m - 1, j = n - 1, k = m + n - 1;
    while (i >= 0 && j >= 0)
    {
        if (nums1[i] < nums2[j])
        {
            nums1[k] = nums2[j];
            k--;
            j--;
        }
        else
        {
            nums1[k] = nums1[i];
            k--;
            i--;
        }
    }

    {
        while (i >= 0)
        {
            nums1[k] = nums1[i];
            k--;
            i--;
        }
    }

    {
        while (j >= 0)
        {
            nums1[k] = nums2[j];
            k--;
            j--;
        }
    }
}

int main()
{
    int n, m;
    vector<int> nums1(n + m), nums2;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums1[i] = x;
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        nums2.push_back(x);
    }
    merge(nums1, n, nums2, m);
    for (int i = 0; i < m + n; i++)
        cout << nums1[i] << " ";
}