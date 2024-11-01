
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

void left_Print(TreeNode *root)
{
    if (root == NULL)
        return;
    if (root->left)
        left_Print(root->left);
    else
    {
        if (root->right)
            left_Print(root->right);
    }

    if (root->left)
        cout << root->left->val << " ";
    else
    {
        if (root->right)
            cout << root->right->val << " ";
    }
}
void Right_Print(TreeNode *root)
{
    if (root == NULL)
        return;
    if (root->right)
    {
        cout << root->right->val << " ";
        Right_Print(root->right);
    }
    else
    {
        if (root->left)
        {
            cout << root->left->val << " ";
            Right_Print(root->left);
        }
    }
}
int main()
{
    TreeNode *root = Input();
    left_Print(root->left);
    if (root->left)
        cout << root->left->val << " ";
    if (root)
        cout << root->val << " ";
    if (root->right)
        cout << root->right->val << " ";
    Right_Print(root->right);
    return 0;
}