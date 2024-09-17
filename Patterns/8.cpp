#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)
            cout << " ";
        for (int k = 2 * (5 - i) + 1; k > 0; k--)
            cout << "*";
        cout << endl;
    }
}