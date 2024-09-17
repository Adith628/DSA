#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = nullptr;
    }
};

void insertAtTail(node *&head, int val)
{

    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = n;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

// 3-Pointer for linked list reversal
node *reverseli(node *&head)
{

    node *current = head, *prev = nullptr, *next;
    while (current != nullptr)
    {
        next = current->next;
        current->next = prev;

        prev = current;
        current = next;
    }
    return prev;

    // node *current = head, *prev = nullptr, *next;
    // while (current != nullptr)
    // {
    //     next = current->next;

    //     current->next = prev;

    //     prev = current;
    //     current = next;
    // }
    // return prev;
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    display(head);
    node *rev = reverseli(head);
    display(rev);
    return 0;
}