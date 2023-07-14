#include <bits/stdc++.h>

using namespace std;

bool validMountainArray(vector<int> &arr)
{
    int n = arr.size();
    if (n < 3)
    {
        return false;
    }
    int i = 0;
    while (i < n - 1 && arr[i] < arr[i + 1])
    {
        i++;
    }
    if (i == 0 || i == n - 1)
    {
        return false;
    }

    while (i < n - 1 && arr[i] > arr[i + 1])
    {
        i++;
    }

    return i == n - 1;
}

int main()
{
    vector<int> arr1 = {2, 1};
    cout << boolalpha << validMountainArray(arr1) << endl; // false, less than 3 elements

    vector<int> arr2 = {3, 5, 5};
    cout << boolalpha << validMountainArray(arr2) << endl; // false, no peak

    vector<int> arr3 = {0, 3, 2, 1};
    cout << boolalpha << validMountainArray(arr3) << endl; // true

    vector<int> arr4 = {0, 2, 3, 4, 5, 2, 1, 0};
    cout << boolalpha << validMountainArray(arr4) << endl; // true

    vector<int> arr5 = {0, 2, 3, 3, 5, 2, 1, 0};
    cout << boolalpha << validMountainArray(arr5) << endl; // false, plateau in the ascending part

    return 0;
}
