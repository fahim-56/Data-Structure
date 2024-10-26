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
    while (1)
    {
        cin >> val;
        if (val == -1)
            break;
        Take_Input(head, val);
        size++;
    }

    Node *temp = head;
    int x = size / 2;
    if (size % 2 == 0)
    {
        temp = head;
        for (int i = 1; i <= x-1 ; i++)
        {
            temp = temp->next_address;
        }
        cout << temp->value << " " << temp->next_address->value << endl;
    }
    else
    {
        temp = head;
        for (int i = 1; i <= x-1; i++)
        {
            temp = temp->next_address;
        }
        cout << temp->next_address->value << endl;
    }

    return 0;
}