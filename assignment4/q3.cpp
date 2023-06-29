#include <bits/stdc++.h>

using namespace std;

void help(vector<vector<int>> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            swap(nums[i][j], nums[j][i]);
        }
    }
}

int main()
{
    vector<vector<int>> nums = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    help(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }
}