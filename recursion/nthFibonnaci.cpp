#include <bits/stdc++.h>
using namespace std;

int nthFeb(int n)
{
    if (n == 0 || n == 1)
        return n;

    int prev = nthFeb(n - 1) + nthFeb(n - 2);
    return prev;
};

int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    return (fibonacci(n - 1) + fibonacci(n - 2));
}

int main()
{
    cout << fibonacci(6) << endl
         << nthFeb(6);
}