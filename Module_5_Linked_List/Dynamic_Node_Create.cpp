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
    Node *head = new Node(10);
    Node *a = new Node(100);

    head->next_address = a;
    cout << head << endl;
    cout << a << endl;

    cout << (*head).next_address << endl;
    cout << head->next_address << endl;

    cout << (*(*head).next_address).value << endl;
    cout << head->next_address->value << endl;

    return 0;
}