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

int nodeCount(Node *root)
{
    if (root == nullptr)
        return 0;
    // return nodeCount(root->left) + nodeCount(root->right) + root->data; for sum of all nodes
    return nodeCount(root->left) + nodeCount(root->right) + 1; // No of nodes in the tree
}

int height(Node *root)
{
    if (root == nullptr)
        return 0;

    int lHeight = height(root->left);
    int rHeight = height(root->right);
    return max(lHeight, rHeight) + 1;
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
    cout << "No of Nodes :  " << nodeCount(root) << endl;
    cout << "Height :  " << height(root) << endl;
    return 0;
}