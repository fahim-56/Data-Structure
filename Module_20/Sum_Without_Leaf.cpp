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
        if (l != -1)
        {
            Node *lNode = new Node(l);
            q.front()->left = lNode;
            q.push(q.front()->left);
        }
        if (r != -1)
        {
            Node *rNode = new Node(r);
            q.front()->right = rNode;
            q.push(q.front()->right);
        }
        q.pop();
    }
    return root;
}
int Leaf_Node(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 0;
    return Leaf_Node(root->left) + Leaf_Node(root->right) + root->val;
}
int main()
{
    Node *root = My_Input();
    cout << Leaf_Node(root) << endl;
    return 0;
}