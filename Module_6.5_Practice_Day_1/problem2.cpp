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
        Node * tail= head;
        while(tail->next_address!=NULL)
        {
            tail=tail->next_address;
        }
        tail->next_address = new_node;
    }
}
int main()
{
    Node *head = NULL;
    int val;
    int fre[100] = {0};
    while (1)
    {
        cin >> val;
        if (val == -1)
            break;
        Take_Input(head, val);
        fre[val]++;
    }
    int n = 101;
    int cnt = 0;
    while (n--)
    {
        if (fre[n] > 1)
        {
            cnt++;
            break;
        }
    }
    if (cnt == 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}