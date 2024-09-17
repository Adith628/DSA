#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << j;
        for (int k = 2 * (5 - i) - 2; k > 0; k--)
            cout << " ";
        for (int j = i; j > 0; j--)
            cout << j;
        cout << endl;
    }
}