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

class Solution
{
public:
    bool isUnivalTree(TreeNode *root)
    {
        if (root == NULL)
            return true;
        return (root->val == root->left->val && root->val == root->right->val);
        bool l = isUnivalTree(root->left);
        bool r = isUnivalTree(root->right);

        return (l && r);
    }
};
vector<int> reverseLevelOrder(TreeNode *root)
{
    queue<TreeNode *> q;
    stack<int> s;

    vector<int> v;
    q.push(root);
    s.push(root->val);
    while (!q.empty())
    {
        if (q.front()->left)
        {
            q.push(q.front()->left);
            s.push(q.front()->left->val);
        }
        if (q.front()->right)
        {
            q.push(q.front()->right);
            s.push(q.front()->right->val);
        }
        q.pop();
    }
    while (!s.empty())
    {
        v.push_back(s.top());
        s.pop();
    }
    reverse(v.begin(), v.end());
    return v;
}
int main()
{
    int x = 3;
    int y = 5;
    cout << abs(x - y);
    return 0;
}