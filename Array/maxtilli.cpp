#include <bits/stdc++.h>
using namespace std;

int maxTillI(int arr[], int i)
{
    int max = INT_MIN;
    for (int j = 0; j <= i; j++)
        if (max < arr[j])
            max = arr[j];
    return max;
}

int main()
{
    int arr[] = {1, 0, 5, 7, 6, 8};
    cout << maxTillI(arr, 5);
}