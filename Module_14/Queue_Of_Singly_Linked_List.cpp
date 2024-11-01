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
class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (tail == NULL)
        {
            tail = newNode;
            head = newNode;
            return;
        }
        tail->next_address = newNode;
        tail = newNode;
    }
    void pop()
    {
        sz--;
        Node *dNode = head;
        head = head->next_address;
        delete dNode;
        if (head == NULL)
            tail = NULL;
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
    Q.push(10);
    Q.push(20);
    Q.push(30);
    if (!Q.empty())
        cout << Q.front() << " ";
    if (!Q.empty())
        Q.pop();
    if (!Q.empty())
        cout << Q.front() << " ";
    if (!Q.empty())
        Q.pop();
    if (!Q.empty())
        cout << Q.front() << " ";
    if (!Q.empty())
        Q.pop();
    if (!Q.empty())
        cout << Q.front() << " ";

    return 0;
}