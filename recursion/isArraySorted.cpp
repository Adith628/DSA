#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n)
{
    if (n <= 1)
        return true;

    bool rest = isSorted(arr + 1, n - 1);
    return (arr[0] <= arr[1] && rest);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 0};
    cout << isSorted(arr, 6);
}