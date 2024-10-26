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
    return 0;
}