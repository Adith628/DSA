#include <bits/stdc++.h>
using namespace std;

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        char chr = 'A';
        for (int j = 0; j < i; j++)
            cout << chr++;
        cout << endl;
    }
}