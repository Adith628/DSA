// Question Q
// An arithmetic array is an array that contains at least two_jntegers and the differences
// between consecutive integers are equal. For example, [9, IO], [3, 3, 3], and [9, 7, 5, 3] are
// arithmetic arrays, while [I, 3, 3, 7], [2, I, 2], and [I, 2, 4] are not arithmetic arrays.
//
// Sarasvati has an array of N non-negative integers. The i-th integer of the array is A. She
// wants to choose a contiguous arithmetic subarray from her array that has the maximum
// length. Please help her to determine the length of the longest contiguous arithmetic
// subarray.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10, 7, 4, 6, 8, 10, 11};
    int n = 7;
    int ans = 2;
    int pd = arr[1] - arr[0];
    int j = 2;
    int curr = 2;
    while (j < n)
    {
        if (pd == arr[j] - arr[j - 1])
            curr++;
        else
        {
            pd = arr[j] - arr[j - 1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }
    cout << ans;
}