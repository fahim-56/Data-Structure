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
int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    a->next_address = b;
    b->next_address = c;
    c->next_address = d;
    d->next_address=b;
    Node *fast = a;
    Node *slow = a;
    bool flag = false;
    while (fast != NULL && fast->next_address != NULL)
    {
        slow = slow->next_address;
        fast = fast->next_address->next_address;
        if (fast == slow)
        {
            flag = true;
        }
    }
    if (flag == true)
        cout << "Detected" << endl;
    else
        cout << "Not Detected" << endl;
    return 0;
}