#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next_address;
    Node(int value)
    {
        this->value = value;
        next_address = NULL;
    }
};
void Print_Linked_List(Node *head)
{
    Node *temp = head;
    cout << "Linked List : " << endl;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next_address;
    }
    cout << endl;
}
int size(Node *head)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next_address;
    }
    return cnt;
}
void Insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    tail->next_address = new_node;
    tail = new_node;
}
void Delete_head(Node *&head)
{
    Node *dlt = head;
    head = head->next_address;
    delete head;
}
void Delete_node(Node *&head)
{
    int pos;
    cout << "Enter Delete Position :" << endl;
    cin >> pos;
    if (pos >= size(head))
    {
        cout << "invalid" << endl;
        return;
    }
    else if (pos == 1)
    {
        Delete_head(head);
        return;
    }
    Node *temp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next_address;
    }
    Node *dlt = temp->next_address;
    temp->next_address = temp->next_address->next_address;
    delete dlt;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    cout << "Enter the new node value : " << endl;
    while (1)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        else
            Insert_at_tail(head, tail, val);
    }
    Print_Linked_List(head);
    Delete_node(head);
    Print_Linked_List(head);

    return 0;
}