#include <bits/stdc++.h>
using namespace std;

void backtrack(int idx, int target, vector<int> arr, vector<int> &ds, vector<vector<int>> &list)
{
    if (target == 0)
    {
        list.push_back(ds);
        return;
    }

    for (int i = idx; i < arr.size(); i++)
    {
        if (arr[i] <= target)
        {

            ds.push_back(arr[i]);
            backtrack(i, target - arr[i], arr, ds, list);
            ds.pop_back();
        }
    }
    return;
}

int main()
{
    vector<int> arr = {2, 3, 6, 7}, ds;
    vector<vector<int>> ans;

    backtrack(0, 7, arr, ds, ans);
    for (auto it : ans)
    {
        for (auto it2 : it)
            cout << it2 << " ";
        cout << endl;
    }
}