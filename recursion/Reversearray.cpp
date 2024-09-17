#include <bits/stdc++.h>
using namespace std;

void reverseArr(int arr[], int l, int r)
{
    if (r <= l)
        return;
    swap(arr[l], arr[r]);
    reverseArr(arr, l + 1, r - 1);
}

bool palindrome(string s, int l, int r)
{
    if (r <= l)
        return true;
    if (s[l] != s[r])
        return false;
    else
        return palindrome(s, l + 1, r - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    // for (int n : arr)
    //     cout << n << " ";
    // reverseArr(arr, 0, 4);
    // for (int n : arr)
    //     cout << n << " ";
    cout << palindrome("ababca", 0, 5);
}