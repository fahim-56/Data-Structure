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
int main()
{
    myStack st;
    // st.push(100);
    // if (!st.empty())
    //     cout << st.top() << endl;
    // if (!st.empty())
    //     st.pop();
    // if (!st.empty())
    //     st.pop();

    int n;
    cin >> n;
    int x;
    while (n--)
    {
        cin >> x;
        st.push(x);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}