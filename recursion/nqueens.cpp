#include <bits/stdc++.h>
using namespace std;

bool isSafe(int row, int col, vector<string> board, int n)
{
    // check upper diagonal
    int duprow = row;
    int dupcol = col;

    while (row >= 0 && col >= 0)
    {
        if (board[row][col] == 'Q')
            return false;
        row--;
        col--;
    }
    col = dupcol;
    row = dupcol;
    while (col >= 0)
    {
        if (board[row][col] == 'Q')
            return false;
        col--;
    }
    col = dupcol;
    row = dupcol;

    while (row < n && col >= 0)
    {
        if (board[row][col] == 'Q')
            return false;
        row++;
        col--;
    }
    return true;
}

void nqueen(int col, int n, vector<string> &board, vector<vector<string>> &ans)
{
    if (col == n)
    {
        ans.push_back(board);
        return;
    }
    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, board, n))
        {
            board[row][col] = 'Q';
            nqueen(col + 1, n, board, ans);
            board[row][col] = '.';
        }
    }
}

int main()
{
    vector<vector<string>> ans;
    int n = 4;
    vector<string> board(n);
    string s(n, '.');
    for (int i = 0; i < n; i++)
    {
        board[i] = s;
    }
    nqueen(0, n, board, ans);
    for (auto it1 : ans)
    {
        for (auto it2 : it1)
        {
            cout << it2;
        }
        cout << endl;
    }
}