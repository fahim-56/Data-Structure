#include <bits/stdc++.h>
using namespace std;
class BinaryTreeNode
{
public:
    int data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;

    BinaryTreeNode(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

long long leftSum(BinaryTreeNode *root)
{
    vector<int> v;
    queue<BinaryTreeNode *> q;
    if (root == NULL)
        return 0;
    q.push(root);
    while (!q.empty())
    {
        if (q.front()->left)
            q.push(q.front()->left);
        if (q.front()->right)
            q.push(q.front()->right);
        q.pop();
    }
}

int main()
{

    return 0;
}