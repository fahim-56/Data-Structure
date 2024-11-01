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
vector<int> v;
void Leaf_Node(Node *root)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
        v.push_back(root->val);
    Leaf_Node(root->left);
    Leaf_Node(root->right);
}
int main()
{
    Node *root = My_Input();
    v.clear();
    Leaf_Node(root);
    sort(v.begin(), v.end(), greater<int>());
    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}