#include <bits/stdc++.h>

using namespace std;

int help(int n)
{
    int l = 1, h = n;
    while (l <= h)
    {
        int m = (l + h) / 2;
        int x = m * (m + 1) / 2;
        if (x <= n && n - x < m + 1)
        {
            return m;
        }
        else if (x > n)
            h = m - 1;
        else
            l = m + 1;
    }
    return -1;
}

int main()
{
    int n = 5;
    cout << help(n);
}