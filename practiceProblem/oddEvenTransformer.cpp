#include <bits/stdc++.h>
using namespace std;

void printArr(vector<int> &arr)
{
    for (int i : arr)
        cout << i << " ";
    cout << endl;
}

int main()
{
    vector<int> arr = {3, 4, 9};
    int n = 3;
    if (n % 2 == 0)
    {
        printArr(arr);
        return 1;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 2 == 0)
            arr[i] -= 3;
        else
            arr[i] += 3;
    }
    printArr(arr);
    return 1;
}