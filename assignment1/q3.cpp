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
    int t;
    cin >> t;
    cout << lower_bound(arr.begin(), arr.end(), t) - arr.begin();
}