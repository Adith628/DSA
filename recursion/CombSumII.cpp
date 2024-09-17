#include <bits/stdc++.h>
using namespace std;

void recurse(int idx, int target, vector<int> arr, vector<int> &ds, vector<vector<int>> &list)
{
    if (target == 0)
    {
        list.push_back(ds);
        return;
    }

    for (int i = idx; i < arr.size(); i++)
    {
        if (i > idx && arr[i] == arr[i - 1])
            continue;
        if (target < arr[i])
            break;
        ds.push_back(arr[i]);
        recurse(i + 1, target - arr[i], arr, ds, list);
        ds.pop_back();
    }
}

int main()
{
    vector<int> arr = {10, 1, 2, 7, 6, 1, 5};
    int target = 8;
    vector<int> ds;
    vector<vector<int>> res;
    sort(arr.begin(), arr.end());
    recurse(0, target, arr, ds, res);
    for (auto it : res)
    {
        for (auto it2 : it)
            cout << it2 << " ";
        cout << endl;
    }
}