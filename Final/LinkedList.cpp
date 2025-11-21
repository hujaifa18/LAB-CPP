#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void display(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void deleteNode(Node *&head, Node *&tail, int val)
{
    if (head == NULL)
        return;

    if (head->val == val)
    {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL)
            tail = NULL;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL && tmp->next->val != val)
    {
        tmp = tmp->next;
    }
    if (tmp->next != NULL)
    {
        Node *deleteNode = tmp->next;
        tmp->next = tmp->next->next;
        delete deleteNode;
        if (tmp->next == NULL)
            tail = tmp;
    }
}
int search(Node *head, int x)
{
    Node *tmp = head;
    int index = 0;
    while (tmp != NULL)
    {
        if (tmp->val == x)
        {
            return index;
        }
        tmp = tmp->next;
        index++;
    }
    return -1;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insert(head, tail, 9);
    insert(head, tail, 3);
    insert(head, tail, 5);
    insert(head, tail, 11);
    cout << "Original list: ";
    display(head);
    int idx = search(head, 11);
    if (idx != -1)
    {
        cout << "Found 11 at index " << idx << endl;
        deleteNode(head, tail, 11);
        cout << "After deleting 11: ";
        display(head);
    }
    else
    {
        cout << "11 not found" << endl;
    }
    return 0;
}