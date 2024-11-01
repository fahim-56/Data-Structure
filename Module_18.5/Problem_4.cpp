#include <bits/stdc++.h>
using namespace std;

class BinaryTreeNode
{
public:
  int val;
  BinaryTreeNode *left;
  BinaryTreeNode *right;
  BinaryTreeNode(int val)
  {
    this->val = val;
    this->left = NULL;
    this->right = NULL;
  }
};
vector<int> getLevelOrder(BinaryTreeNode *root)
{
  queue<BinaryTreeNode *> q;
  vector<int> v;
  if (root == NULL)
    return v;
  q.push(root);
  while (!q.empty())
  {
    v.push_back(q.front()->val);
    if (q.front()->left)
      q.push(q.front()->left);
    if (q.front()->right)
      q.push(q.front()->right);
    q.pop();
  }
  return v;
}
int main()
{

  return 0;
}