#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    vector<vector<int>> ans;
    int n = nums.size();
    sort(nums.begin(), nums.end());
    if (nums.size() < 4)
    {
        return {};
    }
    for (int m = 0; m < n; m++)
    {
        if (m > 0 && nums[m] == nums[m - 1])
            continue;
        long long int t = target - nums[m]; // cout<<t<<endl;
        for (int i = m + 1; i < n; i++)
        {
            // cout<<"a";
            //  if(i>0 && nums[i]==nums[i-1])
            //      continue;
            long long int t1 = t - nums[i]; // cout<<t<<endl;
            int j = i + 1, k = n - 1;
            while (j < k)
            {
                if (nums[j] + nums[k] == t1)
                {
                    vector<int> temp;
                    // cout<<nums[j]<<" "<<nums[k]<<endl;
                    temp.push_back(nums[m]);
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    ans.push_back(temp);
                    j++;
                    k--;
                    while (j < n && nums[j] == nums[j - 1])
                        j++;
                    while (k >= 0 && nums[k] == nums[k + 1])
                        k--;
                }
                else if (nums[j] + nums[k] < t1)
                {
                    j++;
                }
                else
                    k--;
            }
            while (i < n - 1 && nums[i] == nums[i + 1])
                i++;
        }
        // cout<<endl<<endl;
    }
    return ans;
}

int main()
{
    int n, target;
    vector<int> nums;
    vector<vector<int>> ans;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cin >> target;
    ans = fourSum(nums, target);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
}