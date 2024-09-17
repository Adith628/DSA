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

int sumReplace(Node *root)
{
    if (root == nullptr)
        return 0;
    int lsum = sumReplace(root->left);
    int rsum = sumReplace(root->right);
    root->data = lsum + rsum + root->data;
    return root->data;
}

void inorder(struct Node *root)
{
    if (root == nullptr)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
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
    int sum = sumReplace(root);
    inorder(root);
    return 0;
}