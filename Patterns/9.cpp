#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - 1 - i; j++)
            cout << " ";
        for (int k = 0; k < (2 * i + 1); k++)
            cout << "*";
        cout << endl;
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j < i; j++)
            cout << " ";
        for (int k = 2 * (5 - i) + 1; k > 0; k--)
            cout << "*";
        cout << endl;
    }
}