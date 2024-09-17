#include <bits/stdc++.h>
using namespace std;

int main()
{
    const int n = 2, m = 3, p = 2;

    // Hardcoded matrices
    vector<vector<int>> matrix1 = {
        {1, 2, 3},
        {4, 5, 6}};

    vector<vector<int>> matrix2 = {
        {7, 8},
        {9, 10},
        {11, 12}};

    // Resultant matrix with initialized to 0
    vector<vector<int>> result(n, vector<int>(p, 0));

    // Matrix multiplication
    for (int i = 0; i < n; i++)
        for (int j = 0; j < p; j++)
            for (int k = 0; k < m; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }

    // Output the result
    cout << "Resultant matrix:" << endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < p; ++j)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}