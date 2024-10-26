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
    Node a(10), b(20);
    a.next_address = &b;

    cout << a.value << " " << a.next_address << endl;
    cout << b.value << " " << b.next_address << endl;
    cout << a.next_address->value << endl;

    return 0;
}