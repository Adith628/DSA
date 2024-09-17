#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;
    int prev = fact(n - 1);
    return n * prev;
}

int main()
{
    cout << fact(4);
}