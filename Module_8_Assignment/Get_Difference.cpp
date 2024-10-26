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
void Take_Input(Node *&head, Node *&tail, int val)
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
    int val;
    int size = 0;
    int mx = INT_MIN;
    int mn = INT_MAX;
    while (1)
    {
        cin >> val;
        if (val == -1)
            break;
        Take_Input(head, tail, val);

        size++;
    }
    Node *temp = head;
    for (int i = 0; i < size; i++)
    {
        if (mx < temp->value)
            mx = temp->value;
        if (mn > temp->value)
            mn = temp->value;
        temp = temp->next_address;
    }
    cout << (mx - mn) << endl;

    return 0;
}