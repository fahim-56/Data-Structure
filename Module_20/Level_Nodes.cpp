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
void Print_Level(Node *root, int x)
{
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    int flag = 0;
    while (!q.empty())
    {
        if (q.front().second == x)
        {
            cout << q.front().first->val << " ";
            flag++;
        }
        if (q.front().first->left)
            q.push({q.front().first->left, q.front().second + 1});
        if (q.front().first->right)
            q.push({q.front().first->right, q.front().second + 1});
        q.pop();
    }
    if (flag == 0)
        cout << "Invalid" << endl;
}
int main()
{
    Node *root = My_Input();
    int x;
    cin >> x;
    Print_Level(root, x);
    return 0;
}