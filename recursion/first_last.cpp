#include <bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int size, int i, int key)
{
    if (i == size) // base case
        return -1;
    if (arr[i] == key)
        return i;
    return firstOcc(arr, size, i + 1, key);
}

int lastOcc(int arr[], int size, int val)
{
    if (size < 0)
        return -1;
    if (arr[size] == val)
        return size;
    return lastOcc(arr, size - 1, val);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 3, 5};
    int val = 3;
    cout << firstOcc(arr, 5, 0, val) << endl;
    cout << lastOcc(arr, 5, val);
}