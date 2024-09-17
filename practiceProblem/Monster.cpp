#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "PPPPPP@PPP@PP$PP";
    vector<int> list;
    int count = 0;
    for (char ch : s)
    {
        if (ch == 'P')
            count++;
        else
        {
            list.push_back(count);
            count = 0;
        }
    }
    if (count != 0)
        list.push_back(count);
    int ans = *min_element(list.begin(), list.end());
    cout << ans;
}
