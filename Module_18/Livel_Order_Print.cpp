#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void Level_Order_Print(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        cout << f->val << " ";
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    cout << endl;
}
void right_to_left_level_Order_Print(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        cout << q.front()->val << " ";
        if (q.front()->right)
            q.push(q.front()->right);
        if (q.front()->left)
            q.push(q.front()->left);
        q.pop();
    }
    cout << endl;
}
void right_to_left_level_Order_Print(Node *root)
{
    cout << "Right to Left Print : " << endl;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        cout << q.front()->val << " ";
        if (q.front()->right)
            q.push(q.front()->right);
        if (q.front()->left)
            q.push(q.front()->left);
        q.pop();
    }
    cout << endl;
}
int main()
{
    // create node
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);

    // connection
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    d->left = g;
    b->left = e;
    b->right = f;
    e->left = h;
    e->right = i;
    Level_Order_Print(root);
    right_to_left_level_Order_Print(root);
    return 0;
}