#include <bits/stdc++.h>
using namespace std;

// build a binary tree using inorder and preorder traversals

struct Node
{
    int data;
    Node *right;
    Node *left;
    Node(int val)
    {
        data = val;
        right = nullptr;
        left = nullptr;
    }
};

int search(int inorder[], int start, int end, int curr)
{
    for (int i = start; i <= end; i++)
        if (inorder[i] == curr)
            return i;
    return -1;
}

void inorderPrint(Node *root)
{
    if (root == nullptr)
        return;
    inorderPrint(root->left);
    cout << root->data << " ";
    inorderPrint(root->right);
}

Node *builtTree(int preorder[], int inorder[], int start, int end)
{
    static int idx = 0;
    if (start > end)
        return nullptr;

    int curr = preorder[idx++];
    Node *node = new Node(curr);
    if (start == end)
        return node;

    int pos = search(inorder, start, end, curr);
    node->left = builtTree(preorder, inorder, start, pos - 1);
    node->right = builtTree(preorder, inorder, pos + 1, end);

    return node;
}

int main()
{
    int preorder[] = {1, 2, 4, 3, 5};
    int inorder[] = {4, 2, 1, 5, 3};

    Node *root = builtTree(preorder, inorder, 0, 4);
    inorderPrint(root);
    return 0;
}
