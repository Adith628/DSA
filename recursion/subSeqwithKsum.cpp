#include <bits/stdc++.h>
using namespace std;

void sumK(int idx, vector<int> &ds, int s, int sum, vector<int> &arr, int n)
{
    if (idx == n)
    {
        if (s == sum)
        {
            for (int i : ds)
                cout << i << " ";
            cout << endl;
        }
        return;
    }
    // pick
    ds.push_back(arr[idx]);
    s += arr[idx];
    sumK(idx + 1, ds, s, sum, arr, n);
    // not pick
    s -= arr[idx];
    ds.pop_back();
    sumK(idx + 1, ds, s, sum, arr, n);
}

int main()
{
    vector<int> arr = {1, 2, 3, 1, 5};
    vector<int> ds;
    int n = 5;
    int sum = 4;
    sumK(0, ds, 0, sum, arr, n);
}