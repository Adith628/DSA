#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)
            cout << count++ << " ";
        cout << endl;
    }
}