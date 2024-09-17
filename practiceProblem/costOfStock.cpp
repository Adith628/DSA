#include <bits/stdc++.h>
using namespace std;

int countTripletsDivisibleByD(const vector<int> &arr, int d)
{
    int n = arr.size();
    int count = 0;

    // Iterate over all possible triplets (i, j, k) such that i < j < k
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                // Calculate the sum of the triplet
                int sum = arr[i] + arr[j] + arr[k];

                // Check if the sum is divisible by d
                if (sum % d == 0)
                {
                    count++; // Increment the count if divisible
                }
            }
        }
    }

    return count; // Return the total number of valid triplets
}

int main()
{
    vector<int> arr = {3, 6, 9, 12}; // Example array of stock prices
    int d = 3;                       // Divisor

    // Call the function to count valid triplets and print the result
    int result = countTripletsDivisibleByD(arr, d);
    cout << "Number of valid triplets: " << result << endl;

    return 0;
}