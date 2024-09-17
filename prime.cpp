#include <bits/stdc++.h>
using namespace std;

int main()
{

    // int n = 10, sum = 0;

    // vector<bool> prime(n + 1, true);
    // prime[0] = prime[1] = false;

    // for (int p = 2; p * p <= n; ++p)
    // {
    //     if (prime[p])
    //     {
    //         for (int i = p * p; i <= n; i += p)
    //             prime[i] = false;
    //     }
    // }
    // for (int i = 2; i <= n; i++)
    //     if (prime[i])
    //         sum += i;
    // cout << sum;
    int n = 10, sum = 0;
    vector<bool> prime(n + 1, true);

    prime[0] = prime[1] = false;
    for (int p = 2; p * p <= n; ++p)
    {
        if (prime[p])
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int i = 2; i <= n; i++)
        if (prime[i])
            sum += i;
    cout << "Sum of primes : " << sum << endl;
}
