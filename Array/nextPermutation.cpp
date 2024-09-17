#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 1, 5};
    int idx = -1;
    // find the dip
    for (int i = arr.size() - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            idx = i;
            break;
        }
    }
    if (idx == -1)
    {
        reverse(arr.begin(), arr.end());
        for (auto it : arr)
            cout << it << " ";
        cout << endl;
        return 0;
    }
    // find the next larget digit
    for (int i = arr.size() - 1; i >= idx; i--)
    {
        if (arr[i] > arr[idx])
        {
            swap(arr[i], arr[idx]);
            break;
        }
    }
    // sort the rem digits
    reverse(arr.begin() + idx + 1, arr.end());
    for (auto it : arr)
        cout << it << " ";
    cout << endl;
}