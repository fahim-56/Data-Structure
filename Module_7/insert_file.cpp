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
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next_address;
    }
    cout << endl;
}
void Insert_Node(Node *head)
{
    cout << "Enter the node Insert position :" << endl;
    int pos;
    cin >> pos;
    cout << "Enter the value to insert :" << endl;
    int val;
    cin >> val;
    Node *new_node = new Node(val);
    Node *temp = head;
    int i;
    for (i = 1; i < pos - 1; i++) // This loop will work for i=temp
    {
        // cout << temp->value;
        temp = temp->next_address;
    }
    new_node->next_address = temp->next_address;
    temp->next_address = new_node;
    // cout<<i<<" "<<temp->value<<endl;
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
    Insert_Node(head);
    Print_Linked_List(head);
    return 0;
}