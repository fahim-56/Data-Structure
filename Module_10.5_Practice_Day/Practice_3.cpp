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
void Check_Palindrome(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    bool flag = false;
    while (i != j && i->next_address != j)
    {
        if (i->value != j->value)
        {
            flag = true;
        }
        i = i->next_address;
        j = j->previous;
    }
    if (i->value != j->value)
    {
        flag = true;
    }
    if (flag == true)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
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
    Check_Palindrome(head, tail);
    return 0;
}