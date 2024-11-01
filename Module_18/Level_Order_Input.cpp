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
    cout << "Left to right Print : " << endl;
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
Node *Input()
{
    int r;
    cin >> r;
    Node *root = NULL;
    if (r != -1)
        root = new Node(r);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *lNode = NULL, *rNode = NULL;
        if (l != -1)
            lNode = new Node(l);
        if (r != -1)
            rNode = new Node(r);

        p->left = lNode;
        p->right = rNode;
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
Node *My_Input()
{
    int r;
    cin >> r;
    Node *root = NULL;
    if (r == -1)
        return root;
    root = new Node(r);
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int l, r;
        cin >> l >> r;
        Node *lNode = NULL, *rNode = NULL;
        if (l != -1)
        {
            lNode = new Node(l);
            q.front()->left = lNode;
            q.push(q.front()->left);
        }
        if (r != -1)
        {
            rNode = new Node(r);
            q.front()->right = rNode;
            q.push(q.front()->right);
        }
        q.pop();
    }
    return root;
}
// 10 20 30 40 50 60 70 -1 -1 80 -1 90 100 -1 -1 -1 -1 -1 -1 -1 -1
int main()
{
    // Node *root = Input();
    Node *root = My_Input();

    Level_Order_Print(root);
    right_to_left_level_Order_Print(root);
    return 0;
}