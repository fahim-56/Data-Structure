#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next_address;
    Node *prev;
    Node(int value)
    {
        this->value = value;
        next_address = NULL;
        prev = NULL;
    }
};
class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *new_node = new Node(val);
        if (tail == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        tail->next_address = new_node;
        new_node->prev = tail;
        tail = new_node;
    }
    void pop()
    {
        sz--;
        Node *dNode = head;
        head = head->next_address;
        delete dNode;
        if (head == NULL)
        {
            tail = NULL;
            return;
        }
        head->prev = NULL;
    }
    int front()
    {
        return head->value;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myQueue Q;
    // Q.push(10);
    // Q.push(20);
    // Q.push(30);
    // if (!Q.empty())
    //     cout << Q.front() << " ";
    // if (!Q.empty())
    //     Q.pop();
    // if (!Q.empty())
    //     cout << Q.front() << " ";
    // if (!Q.empty())
    //     Q.pop();
    // if (!Q.empty())
    //     cout << Q.front() << " ";

    int n;
    cin >> n;
    int x;
    while (n--)
    {
        cin >> x;
        Q.push(x);
    }
    while (!Q.empty())
    {
        cout << Q.front() << " ";
        Q.pop();
    }
    return 0;
}