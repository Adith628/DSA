#include <bits/stdc++.h>
using namespace std;

bool checkInclusion(string s1, string s2)
{
    if (s1.size() > s2.size())
        return false;
    vector<int> s1count(26, 0), s2count(26, 0);
    for (int i = 0; i < s1.size(); i++)
    {
        s1count[s1[i] - 'a']++;
        s2count[s2[i] - 'a']++;
    }
    if (s1count == s2count)
        return true;
    int window = s1.size();
    for (int i = window; i < s2.size(); i++)
    {
        s2count[s2[i] - 'a']++;
        s2count[s2[i - window] - 'a']--;

        if (s1count == s2count)
            return true;
    }
    return false;
}

int main()
{
    string s1 = "ab", s2 = "eidbooo";
    if (checkInclusion(s1, s2))
        cout << "True\n";
    else
        cout << "False\n";
    return 1;
}