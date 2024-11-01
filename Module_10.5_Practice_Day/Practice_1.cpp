#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next_address;
    Node *previous;
    Node(int value)
    {
        this->value = value;
        next_address = NULL;
        previous = NULL;
    }
};
void Take_Input(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);
    if (tail == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    new_node->previous = tail;
    tail->next_address = new_node;
    tail = new_node;
}
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
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (1)
    {
        cin >> val;
        if (val == -1)
            break;
        Take_Input(head, tail, val);
    }
    Node *head_2 = NULL;
    Node *tail_2 = NULL;
    while (1)
    {
        cin >> val;
        if (val == -1)
            break;
        Take_Input(head_2, tail_2, val);
    }
    if (size(head) != size(head_2))
    {
        cout << "NO" << endl;
        return 0;
    }
    else
    {
        Node *temp = head;
        Node *temp2 = head_2;
        bool flag = false;
        while (temp != NULL)
        {
            if (temp->value != temp2->value)
            {
                cout << "NO" << endl;
                flag = true;
                break;
            }
            temp2 = temp2->next_address;
            temp = temp->next_address;
        }
        if (flag == false)
            cout << "YES" << endl;
    }
}