#include <bits/stdc++.h>
using namespace std;
class Tree_Node
{
public:
    int val;
    Tree_Node *left;
    Tree_Node *right;
    Tree_Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Tree_Node *My_Input()
{
    int r;
    cin >> r;
    Tree_Node *root = NULL;
    if (r == -1)
        return root;
    root = new Tree_Node(r);
    queue<Tree_Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int l, r;
        cin >> l >> r;
        if (l != -1)
        {
            q.front()->left = new Tree_Node(l);
            q.push(q.front()->left);
        }
        if (r != -1)
        {
            q.front()->right = new Tree_Node(r);
            q.push(q.front()->right);
        }
        q.pop();
    }
    return root;
}
// 50 30 70 20 40 60 80 10 -1 -1 -1 -1 65 -1 -1 -1 -1 -1 -1
// 50 30 70 20 40 60 -1 10 -1 -1 -1 -1 65 -1 -1 -1 -1
void Insert(Tree_Node *&root, int x)
{
    if (root == NULL)
    {
        root = new Tree_Node(x);
        return;
    }
    if (x < root->val)
    {
        // if (root->left)
        Insert(root->left, x);
    }
    else
    {
        // if (root->right)
        Insert(root->right, x);
    }
}
void Print(Tree_Node *root)
{
    queue<Tree_Node *> q;
    q.push(root);
    while (!q.empty())
    {
        cout << q.front()->val << " ";
        if (q.front()->left)
            q.push(q.front()->left);
        if (q.front()->right)
            q.push(q.front()->right);
        q.pop();
    }
}
int main()
{
    cout << "Input of Tree : " << endl;
    Tree_Node *root = My_Input();
    cout << "Input The Inserting value" << endl;
    // int x;
    // cin >> x;
    // Insert(root, x);
    Insert(root, 5);
    Insert(root, 45);
    Insert(root, 80);
    Print(root);
    return 0;
}