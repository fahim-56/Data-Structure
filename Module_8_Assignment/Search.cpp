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
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int val;
        int size = 0;
        int x;
        while (1)
        {
            cin >> val;
            if (val == -1)
                break;
            Take_Input(head, tail, val);
            size++;
        }
        cin >> x;
        int cnt = 0;
        Node *temp = head;
        for (int i = 0; i < size; i++)
        {
            if (temp->value == x)
            {
                cout << i << endl;
                cnt++;
                break;
            }
            temp = temp->next_address;
        }
        if (cnt == 0)
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}