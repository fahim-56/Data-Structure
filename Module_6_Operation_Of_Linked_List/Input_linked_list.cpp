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
void Insert_at_Tail(Node *&head, int val)
{

    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        return;
    }
    else
    {
        Node *tail = head;
        while (tail->next_address != NULL)
        {
            tail = tail->next_address;
        }
        tail->next_address = new_node;
    }
    return;
}
void Reursive_Print_linked_list(Node *head)
{
    Node *temp = head;
    cout << "Linked List : ";
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next_address;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    cout << "Enter New Nodes : " << endl;
    while (1)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        Insert_at_Tail(head, val);
    }
    Reursive_Print_linked_list(head);
    return 0;
}