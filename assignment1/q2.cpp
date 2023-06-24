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
    int i = 0, j = 0;
    while (j < n)
    {
        if (arr[j] != t)
        {
            arr[i] = arr[j];
            i++;
            j++;
        }
        else
            j++;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}