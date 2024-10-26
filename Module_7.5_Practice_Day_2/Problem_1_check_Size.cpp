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
int size(Node *head)
{
    int size = 0;
    while (head != NULL)
    {
        head = head->next_address;
        size++;
    }
    return size;
}
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
int main()
{
    int val;
    Node *head1 = NULL;
    Node *tail1 = NULL;
    while (1)
    {
        cin >> val;
        if (val == -1)
            break;
        Take_input(head1, tail1, val);
    }
    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (1)
    {
        cin >> val;
        if (val == -1)
            break;
        Take_input(head2, tail2, val);
    }
    if (size(head1) == size(head2))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}