#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "796115110113721110141108";
    reverse(s.begin(), s.end());
    int i = 0;
    string res = "";
    while (i < s.size())
    {
        string sub = s.substr(i, 2);
        int asc = stoi(sub);
        if (asc == 32)
        {
            res = res + " ";
            i += 2;
        }
        else if (asc >= 65 && asc <= 90 || asc >= 97 && asc <= 99)
        {
            res = res + char(asc);
            i += 2;
        }

        else
        {
            sub = s.substr(i, 3);
            asc = stoi(sub);
            if (asc >= 'a' && asc <= 'z')
            {
                res = res + char(asc);
                i += 3;
            }
        }
    }
    cout << res << endl;
}