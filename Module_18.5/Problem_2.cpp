#include <bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

vector<int> v;

void PreOrder(TreeNode *root)
{
    if (root == NULL)
        return;
    v.push_back(root->data);
    PreOrder(root->left);
    PreOrder(root->right);
}
vector<int> preOrder(TreeNode *root)
{
    // Write your code here.
    v.clear();
    PreOrder(root);
    return v;
}

int main()
{

    return 0;
}