// given an array a[] of size n. Output sum of each subarray of the given array.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {0, 1, 2, 3};
    int n = 4, j;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (j = i; j < n; j++)
        {
            sum += arr[j];
            cout << "sum of " << i << " to " << j << " is " << sum << endl;
        }
    }
}
