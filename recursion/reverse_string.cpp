#include <bits/stdc++.h>
using namespace std;

void revString(string str)
{
    if (str.length() == 0) // base case
        return;
    string resStr = str.substr(1);
    revString(resStr);
    cout << str[0];
}

int main()
{
    string str = "hello";
    revString(str);
}