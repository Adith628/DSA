#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        int start = 1;
        if (i % 2 == 0)
            start = 0;
        for (int j = 0; j < i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}