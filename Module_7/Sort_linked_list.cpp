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
void Print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next_address;
    }
    cout << endl;
}
void Insert_at_Tail(Node *&head, Node *&tail, int val)
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
void Sort_Assending_Oder(Node *head)
{
    for (Node *i = head; i->next_address != NULL; i = i->next_address)
    {
        for (Node *j = i->next_address; j != NULL; j = j->next_address)
        {
            if (i->value > j->value)
            {
                swap(i->value, j->value);
            }
        }
    }
}
void Sort_Desending_Oder(Node *head)
{
    for (Node *i = head; i->next_address != NULL; i = i->next_address)
    {
        for (Node *j = i->next_address; j != NULL; j = j->next_address)
        {
            if (i->value < j->value)
            {
                swap(i->value, j->value);
            }
        }
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    cout << "Enter New Node value :" << endl;
    while (1)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        Insert_at_Tail(head, tail, val);
    }
    cout << "Linked List : " << endl;
    Print_linked_list(head);
    Sort_Assending_Oder(head);
    cout << "Assending Order : " << endl;
    Print_linked_list(head);
    Sort_Desending_Oder(head);
    cout << "Desending Order : " << endl;
    Print_linked_list(head);

    return 0;
}