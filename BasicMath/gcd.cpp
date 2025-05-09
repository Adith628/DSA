#include <bits/stdc++.h>
using namespace std;

int euclid(int n, int m);

int main()
{
    int n = 4, m = 14;
    int gcd = 1;
    for (int i = 1; i <= min(n, m); i++)
    {
        if (n % i == 0 && m % i == 0)
            gcd = i;
    }
    cout << "gcd = " << gcd << endl;
    int x = euclid(n, m);
    cout << "gcd2 = " << x << endl;
    return 0;
}

int euclid(int n, int m)
{
    if (m == 0)
        return n;
    return euclid(m, n % m);
}