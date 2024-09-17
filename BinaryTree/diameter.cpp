#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

int calcHeight(Node *root)
{
    if (root == nullptr)
        return 0;
    int l = calcHeight(root->left);
    int r = calcHeight(root->right);
    return max(l, r) + 1;
}

int calcDiameter(Node *root)
{
    if (root == nullptr)
        return 0;

    int lHeight = calcHeight(root->left);
    int rHeight = calcHeight(root->right);
    int currDiameter = lHeight + rHeight + 1;

    int ldia = calcDiameter(root->left);
    int rdia = calcDiameter(root->right);
    return max(currDiameter, max(ldia, rdia));
}

// optimized version

int calcDiaOpt(Node *root, int *height)
{
    if (root == nullptr)
    {
        *height = 0;
        return 0;
    }
    int lh = 0, rh = 0;
    int ldia = calcDiaOpt(root->left, &lh);
    int rdia = calcDiaOpt(root->right, &rh);

    int currDia = lh + rh + 1;
    *height = max(lh, rh) + 1;
    return max(currDia, max(ldia, rdia));
}

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right = new Node(3);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    int height = 0;
    cout << "dia : " << calcDiaOpt(root, &height);
}