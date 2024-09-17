#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 1; i <= 2 * 5 - 1; i++)
    {
        if (i <= 5)
        {
            for (int j = 1; j <= i; j++)
                cout << "*";
        }
        else
            for (int j = 0; j < 2 * 5 - i; j++)
                cout << "*";

        cout << endl;
    }
}