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
bool isNodePresent(BinaryTreeNode *root, int x)
{
    queue<BinaryTreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        if (q.front()->data == x)
            return true;
        if (q.front()->left)
            q.push(q.front()->left);
        if (q.front()->right)
            q.push(q.front()->right);
        q.pop();
    }
    return false;
}
int main()
{
    pair<int, float> p;
    p.first = 10;
    p.second = 10.5;
    cout << p.first << endl;
    return 0;
}