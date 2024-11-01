
#include <bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
TreeNode *Input()
{
    int rt, l, r;
    cin >> rt;
    TreeNode *root = NULL;
    if (rt == -1)
        return root;
    if (rt != -1)
        root = new TreeNode(rt);
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        cin >> l >> r;
        if (l != -1)
        {
            q.front()->left = new TreeNode(l);
            q.push(q.front()->left);
        }
        if (r != -1)
        {
            q.front()->right = new TreeNode(r);
            q.push(q.front()->right);
        }
        q.pop();
    }
    return root;
}
bool Is_Perfect(TreeNode *root)
{
    int depth = 0;
    int node = 0;
    queue<pair<TreeNode *, int>> q;
    if (root)
    {
        q.push({root, 1});
        node++;
    }
    while (!q.empty())
    {
        depth = max(depth, q.front().second);
        if (q.front().first->left)
        {
            q.push({q.front().first->left, q.front().second + 1});
            node++;
        }
        if (q.front().first->right)
        {
            q.push({q.front().first->right, q.front().second + 1});
            node++;
        }
        q.pop();
    }
    return ((pow(2, depth) - 1) == node);
}
int main()
{
    TreeNode *root = Input();
    if (Is_Perfect(root))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}