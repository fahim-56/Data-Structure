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
void Take_Input(Node *&head, int val)
{

    Node *new_node = new Node(val);
    if (head == NULL)
        head = new_node;
    else
    {
        Node *tail = head;
        while (tail->next_address != NULL)
        {
            tail = tail->next_address;
        }
        tail->next_address = new_node;
    }
}
int main()
{
    Node *head = NULL;
    int val;
    int size = 0;
    int frq[1000] = {0};
    while (1)
    {
        cin >> val;
        if (val == -1)
            break;
        Take_Input(head, val);
        frq[val]++;
        size++;
    }

    Node *temp = head;
    while (temp != NULL)
    {
        if (frq[temp->value] > 1)
        {
            cout << temp->value << " ";
            frq[temp->value] = -1;
        }
        else if (frq[temp->value] == -1)
        {
        }
        else if(frq[temp->value] <=1)
        {
            cout << temp->value << " ";
        }
        temp = temp->next_address;
    }

    return 0;
}