#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr, ans;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int carry = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        int x = arr[i];
        if (i == n - 1)
            x++;
        x = x + carry;
        if (x == 10)
        {
            carry = 1;
            arr[i] = 0;
        }
        else
        {
            carry = 0;
            arr[i] = x;
            break;
        }
    }

    if (carry == 1)
    {
        ans.push_back(1);
        for (int i = 0; i < n; i++)
            ans.push_back(arr[i]);
    }
    else
        ans = arr;
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}