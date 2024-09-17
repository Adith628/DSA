#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {2, 4, 3};
    int counter = 0;
    vector<int> res;
    res.push_back(0);
    for (int i = 1; i < arr.size(); i++)
    {
        int counter = 0; // Initialize counter to 0 for each element

        // Inner loop to compare the current element with elements to its left
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[i])
            {
                // If the element to the left is greater, subtract the difference
                counter -= abs(arr[j] - arr[i]);
            }
            else
            {
                // If the element to the left is less, add the difference
                counter += abs(arr[j] - arr[i]);
            }
        }

        // Store the counter value in the result array
        res.push_back(counter);
    }
    for (int i : res)
        cout << i << endl;
}