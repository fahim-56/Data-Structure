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
int Count_All_Node(Node *root)
{
    if (root == NULL)
        return 0;
    return Count_All_Node(root->left) + Count_All_Node(root->right) + 1;
}
int main()
{
    Node *root = My_Input();
    cout << "Total Nodes : " << Count_All_Node(root) << endl;
    return 0;
}