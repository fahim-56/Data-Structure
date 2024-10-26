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
void Insert_at_head(Node *&head)
{
    int val;
    cout << "Enter the new node value :" << endl;
    cin >> val;
    Node *new_node = new Node(val);
    Node *temp = head;
    new_node->next_address = head;
    head = new_node;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next_address = a;
    a->next_address = b;
    b->next_address = c;
    Print_Linked_List(head);
    Insert_at_head(head);
    Print_Linked_List(head);
    return 0;
}