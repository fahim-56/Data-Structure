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
void PostOrder(TreeNode *root)
{
    if (root == NULL)
        return;
    PostOrder(root->left);
    PostOrder(root->right);
    v.push_back(root->data);
}
vector<int> postorderTraversal(TreeNode *root)
{
    v.clear();
PostOrder(root);
}
int main()
{

    return 0;
}