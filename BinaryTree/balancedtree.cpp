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

int height(Node *root)
{
    if (root == nullptr)
        return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh, rh) + 1;
}

bool isBalanced(Node *root)
{
    if (root == nullptr)
        return true;
    if (isBalanced(root->left) == false)
    {
        return false;
    }
    if (isBalanced(root->right) == false)
        return false;
    int lh = height(root->left);
    int rh = height(root->right);
    if (abs(lh - rh) <= 1)
        return true;
    else
        return false;
}

bool isBalancedOpt(Node *root, int *height)
{
    int lh = 0, rh = 0;
    if (isBalancedOpt(root->left, &lh) == false)
        return false;
    if (isBalancedOpt(root->right, &rh) == false)
        return false;
    *height = max(lh, rh) + 1;
    if (abs(lh - rh) <= 1)
        return true;
    else
        return false;
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
    cout << isBalanced(root);
    int height = 0;
    cout << isBalancedOpt(root, &height);
    return 0;
}
