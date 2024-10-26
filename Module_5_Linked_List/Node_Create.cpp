#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *Next_Address;
};
int main()
{
    Node a, b;
    a.value = 10;
    b.value = 20;
    a.Next_Address = &b;
    b.Next_Address = NULL;
    cout << a.value << " " << a.Next_Address << endl;
    cout << b.value << " " << b.Next_Address << endl;

    cout << (*a.Next_Address).value << endl;
    cout << a.Next_Address->value << endl;
    cout << a.Next_Address->Next_Address << endl;

    return 0;
}