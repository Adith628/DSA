// second approach

#include <bits/stdc++.h>
using namespace std;

void permutation(int idx, vector<int> &arr, vector<vector<int>> &ans)
{
    if (idx == arr.size())
    {
        ans.push_back(arr);
        return;
    }
    for (int i = idx; i < arr.size(); i++)
    {
        swap(arr[idx], arr[i]);
        permutation(i + 1, arr, ans);
        swap(arr[idx], arr[i]);
    }
}

int main()
{
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans;
    permutation(0, arr, ans);
    for (auto it1 : ans)
    {
        for (auto it2 : it1)
            cout << it2 << " ";
        cout << endl;
    }
}