#include <bits/stdc++.h>
using namespace std;

void replace(string str)
{
    if (str.length() == 0)
        return;
    string two = str.substr(0, 2);
    if (two.compare("pi") == 0)
    {
        cout << "3.14";
        replace(str.substr(2));
    }
    else
    {
        cout << str[0];
        replace(str.substr(1));
    }
}

int main()
{
    string s = "pipibjagpi";
    replace(s);
}