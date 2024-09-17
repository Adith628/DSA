#include <bits/stdc++.h>
using namespace std;

void subSetSum(int idx, vector<int> arr, vector<int> &ds)
{
    if (idx == arr.size())
    {
        int sum = 0;
        for (auto it : ds)
        {
            cout << it << " ";
            sum += it;
        }
        cout << " : " << sum << endl;
        return;
    }
    ds.push_back(arr[idx]);
    subSetSum(idx + 1, arr, ds);
    ds.pop_back();
    subSetSum(idx + 1, arr, ds);
    return;
}

int main()
{
    vector<int> arr = {3, 2, 1}, ds;
    subSetSum(0, arr, ds);
}