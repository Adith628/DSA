#include <bits/stdc++.h>
using namespace std;

int euclid(int n, int m);
int gcdt(int n, int m);

int main()
{
    int n = 10, m = 20;
    int gcd = 1;
    for (int i = 1; i <= min(n, m); i++)
    {
        if (n % i == 0 && m % i == 0)
            gcd = i;
    }
    cout << "gcd = " << gcd << endl;
    int x = euclid(n, m);
    cout << "gcd2 = " << x << endl;
    int y = gcdt(n, m);
    cout << "gcd3 = " << y << endl;
    return 0;
}

int euclid(int n, int m)
{
    if (m == 0)
        return n;
    return euclid(m, n % m);
}

int gcdt(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}