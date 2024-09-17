#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "how ";
    set<char> un;
    for (auto &it : s)
    {
        if (it == ' ')
            continue;
        un.insert(it);
    }
    cout << "No of unique chars : " << un.size() << endl;
    return 0;
}