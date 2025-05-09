#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> group_anagrams(vector<string> strs)
{

    vector<vector<string>> ans;
    unordered_map<string, vector<string>> map;
    for (int i = 0; i < strs.size(); i++)
    {
        string key = strs[i];
        sort(key.begin(), key.end());
        map[key].push_back(strs[i]);
    }
    for (auto it : map)
    {
        ans.push_back(it.second);
    }
    return ans;
}

int main()
{
    vector<string> strs = {"act", "pots", "tops", "cat", "stop", "hat"};
    vector<vector<string>> ans;
    ans = group_anagrams(strs);
    for (auto it : ans)
    {
        for (auto it2 : it)
        {
            cout << it2 << " ";
        }
        cout << endl;
    }
}