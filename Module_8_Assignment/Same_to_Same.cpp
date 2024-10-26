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
    Node *head1 = NULL;
    int val;
    int size1 = 0;
    while (1)
    {
        cin >> val;
        if (val == -1)
            break;
        Take_Input(head1, val);
        size1++;
    }

    Node *head2 = NULL;
    int val2;
    int size2 = 0;
    while (1)
    {
        cin >> val2;
        if (val2 == -1)
            break;
        Take_Input(head2, val2);
        size2++;
    }
    if (size1 != size2)
        cout << "NO" << endl;
    else
    {
        Node *temp1 = head1;
        Node *temp2 = head2;
        int cnt = 0;
        for (int i = 1; i <= size1; i++)
        {
            if (temp1->value != temp2->value)
            {
                cnt++;
                cout << "NO" << endl;
                break;
            }
            temp1 = temp1->next_address;
            temp2 = temp2->next_address;
        }
        if (cnt == 0)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}