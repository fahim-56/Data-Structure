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
        size++;
        head = head->next_address;
    }
    return size;
}
void Input(Node *&head, int val)
{
    Node *new_node = new Node(val);
    Node *temp = head;
    if (head == NULL)
        head = new_node;
    else
    {
        while (temp->next_address != NULL)
        {
            temp = temp->next_address;
        }
        temp->next_address = new_node;
        temp = new_node;
    }
}
void Find_Middle_Element(Node * head)
{
 int x = (size(head) / 2)-1;
    Node *temp = head;
    if (size(head) % 2 == 0)
    {
        while (x--)
        {
            temp = temp->next_address;
        }
        cout << temp->value << " " << temp->next_address->value;
    }
    else
    {
        while (x--)
        {
            temp = temp->next_address;
        }
                    cout << temp->next_address->value;

    }
}
int main()
{
    int val;
    Node *head = NULL;
    while (1)
    {
        cin >> val;
        if (val == -1)
            break;
        Input(head, val);
    }
   Find_Middle_Element(head);
    return 0;
}