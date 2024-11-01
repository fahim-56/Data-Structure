
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
void Print_Level(TreeNode *root, int x)
{
    queue<pair<TreeNode *, int>> q;
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
    TreeNode *root = Input();
    int x;
    cin >> x;
    Print_Level(root, x);
    return 0;
}