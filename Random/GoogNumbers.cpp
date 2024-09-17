#include <bits/stdc++.h>
using namespace std;

bool isGood(int num)
{
    int temp = num;

    while (temp > 0)
    {
        int digit = temp % 10;
        if (digit == 0 || num % digit != 0)
            return false;
        temp = temp / 10;
    }
    return true;
}

int main()
{
    int start = 2;
    int end = 50;
    for (int i = start; i <= end; i++)
    {
        if (isGood(i))
            cout << i << " ";
    }
    return 0;
}