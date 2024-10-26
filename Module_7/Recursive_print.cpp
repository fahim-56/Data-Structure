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
void Reursive_Print_linked_list(Node *head)
{
    if (head == NULL)
        return;
    cout << head->value << " ";
    Reursive_Print_linked_list(head->next_address);
}
void Reverse_Print_recursively(Node *head)
{
    if (head == NULL)
        return;
    Reverse_Print_recursively(head->next_address);
    cout << head->value << " ";
}
void Recursive_Input(Node *&head, Node *&tail)
{
    int val;
    cin >> val;
    if (val == -1)
        return;
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        tail->next_address = new_node;
        tail = new_node;
    }
    Recursive_Input(head, tail);
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    cout << "Enter Value : " << endl;
    Recursive_Input(head, tail);
    cout << "Linked List : " << endl;
    Reursive_Print_linked_list(head);
    cout << endl
         << "Reverse Print :" << endl;
    Reverse_Print_recursively(head);
    return 0;
}