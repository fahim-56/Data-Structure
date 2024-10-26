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

void Take_input(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        new_node->next_address = head;
        head = new_node;
        tail = new_node;
        return;
    }
    tail->next_address = new_node;
    tail = new_node;
}
void Reverse_Print_Recersively(Node *head)
{
    if (head == NULL)
        return;
    Reverse_Print_Recersively(head->next_address);
    cout << head->value << " ";
}
int main()
{
    int val;
    Node *head = NULL;
    Node *tail = NULL;
    while (1)
    {
        cin >> val;
        if (val == -1)
            break;
        Take_input(head, tail, val);
    }

    Reverse_Print_Recersively(head);
    return 0;
}