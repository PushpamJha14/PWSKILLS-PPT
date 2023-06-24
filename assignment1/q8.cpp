#include <bits/stdc++.h>
using namespace std;

void findDuplicate(vector<int> &a)
{
    long long n = a.size();
    long long SN = (n * (n + 1)) / 2;
    long long S2N = (n * (n + 1) * (2 * n + 1)) / 6;

    long long S = 0, S2 = 0;
    for (int i = 0; i < n; i++)
    {
        S += a[i];
        S2 += (long long)a[i] * (long long)a[i];
    }

    long long val1 = S - SN;

    long long val2 = S2 - S2N;

    val2 = val2 / val1;

    long long x = (val1 + val2) / 2;
    long long y = x - val1;

    cout << x << " " << y;
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
    findDuplicate(nums);
}