#include <bits/stdc++.h>

using namespace std;

int firstUniqChar(string s)
{
    unordered_map<char, int> charCount;

    for (char c : s)
    {
        charCount[c]++;
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (charCount[s[i]] == 1)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    string s = "leetcode";
    int index = firstUniqChar(s);

    cout << "First non-repeating character index: " << index << std::endl;

    return 0;
}