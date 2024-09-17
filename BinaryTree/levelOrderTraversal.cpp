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
        right = nullptr;
        left = nullptr;
    }
};

int sumAtK(Node *root, int k)
{
    if (root == nullptr)
        return -1;
    queue<Node *> q;
    q.push(root);
    q.push(nullptr);
    int level = 0, sum = 0;
    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();
        if (node != nullptr)
        {
            if (level == k)
            {
                sum += node->data;
            }
            if (node->left != nullptr)
                q.push(node->left);
            if (node->right != nullptr)
                q.push(node->right);
        }
        else if (!q.empty())
        {
            q.push(nullptr);
            level++;
        }
    }
    return sum;
}

void printLevelOrder(Node *root)
{
    if (root == nullptr)
        return;

    queue<Node *> q;
    q.push(root);
    q.push(nullptr);
    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();
        if (node != nullptr)
        {
            cout << node->data << " ";
            if (node->left != nullptr)
                q.push(node->left);
            if (node->right != nullptr)
                q.push(node->right);
        }
        else if (!q.empty())
        {
            q.push(nullptr);
        }
    }
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
    printLevelOrder(root);
    cout << endl
         << "sum of lvl2 is " << sumAtK(root, 1);
    return 0;
}