#include <bits/stdc++.h>
using namespace std;

void printAllSub(int idx, vector<int> &arr, vector<int> &list)
{
    if (idx >= arr.size())
    {
        for (int i : list)
            cout << i << " ";
        if (list.size() == 0)
            cout << "{}";
        cout << endl;
        return;
    }

    // not take or not pick the particular index
    printAllSub(idx + 1, arr, list);

    // take or pick the particular index
    list.push_back(arr[idx]);
    printAllSub(idx + 1, arr, list);
    list.pop_back();
}

int main()
{
    vector<int> array = {3, 1, 2};
    vector<int> list;
    printAllSub(0, array, list);
}