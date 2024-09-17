#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1 = "silents";
    string str2 = "listenl";
    unordered_map<char, int> mp;
    if (str1.length() != str2.length())
    {
        cout << "not anagrams\n";
        return 0;
    }
    for (int i = 0; i < str1.length(); i++)
    {
        mp[str1[i]]++;
        mp[str2[i]]--;
    }
    for (auto it : mp)
    {
        if (it.second != 0)
        {
            cout << "Not anagram";
            return 0;
        }
    }
    cout << "Anagram\n";
}