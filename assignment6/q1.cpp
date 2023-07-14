#include <iostream>
#include <vector>

using namespace std;

vector<int> reconstructPermutation(string s)
{
    int n = s.size();
    vector<int> perm;
    int start = 0, end = n;

    for (char ch : s)
    {
        if (ch == 'I')
        {
            perm.push_back(start);
            start++;
        }
        else if (ch == 'D')
        {
            perm.push_back(end);
            end--;
        }
    }

    perm.push_back(start);
    return perm;
}

int main()
{
    string s1 = "IDID";
    vector<int> perm1 = reconstructPermutation(s1);
    for (int num : perm1)
    {
        cout << num << " ";
    }
    cout << endl;

    string s2 = "III";
    vector<int> perm2 = reconstructPermutation(s2);
    for (int num : perm2)
    {
        cout << num << " ";
    }
    cout << endl;

    string s3 = "DDI";
    vector<int> perm3 = reconstructPermutation(s3);
    for (int num : perm3)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
