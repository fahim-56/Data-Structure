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
class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *new_node = new Node(val);
        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        new_node->prev = tail;
        tail->next_address = new_node;
        tail = new_node;
    }
    void pop()
    {
        sz--;
        Node *delete_Node = tail;
        tail = tail->prev;
        if (tail == NULL)
            head = NULL;
        else
            tail->next_address = NULL;
        delete delete_Node;
    }
    int top()
    {
        return tail->value;
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
    myStack S;
    myQueue Q;
    int n, m;
    cin >> n >> m;
    int x;
    while (n--)
    {
        cin >> x;
        S.push(x);
    }
    while (m--)
    {
        cin >> x;
        Q.push(x);
    }
    if (S.size() != Q.size())
    {
        cout << "NO" << endl;
        return 0;
    }
    while (!S.empty())
    {
        if (S.top() != Q.front())
        {
            cout << "NO" << endl;
            return 0;
        }
        S.pop();
        Q.pop();
    }
    cout << "YES" << endl;
    return 0;
}