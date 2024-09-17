#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> heights{4, 12, 2, 7, 3, 18, 20, 3, 19};
    vector<int> diff;
    int bricks = 10, ladders = 2;

    int i, count = 0;

    for (i = 0; i < heights.size() - 1; i++)
    {
        if (heights[i] <= heights[i + 1])
            diff.push_back(0);
        else
        {
            diff.push_back(heights[i + 1] - heights[i]);
        }
    }

    for (i = 0; i < heights.size() - 1; i++)
    {
        if (heights[i] <= heights[i + 1])
            count++;
        else
        {
            if (heights[i + 1] - heights[i] <= bricks)
                continue;
        }
    }
}