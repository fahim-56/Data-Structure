#include <bits/stdc++.h>
using namespace std;

void Insert(vector<int> &v)
{
    cout << "Enter The Number Of Element:" << endl;
    int n;
    cin >> n;
    cout << "Enter Inserting " << n << " Element :" << endl;
    while (n--)
    {
        int x;
        cin >> x;
        v.push_back(x);
        int cur_idx = v.size() - 1;
        int parant_idx;
        while (cur_idx != 0)
        {
            parant_idx = (cur_idx - 1) / 2;
            if (v[parant_idx] > v[cur_idx])
            {
                swap(v[parant_idx], v[cur_idx]);
                cur_idx = parant_idx;
            }
            else
                break;
        }
    }
}
void Delete(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    int cur_idx = 0;
    while (1)
    {
        int left_idx = (2 * cur_idx) + 1;
        int right_idx = (2 * cur_idx) + 2;
        if (left_idx < v.size() && right_idx < v.size())
        {
            // Jodi 2 Ta  node e thake
            if (v[left_idx] <= v[right_idx] && v[cur_idx] > v[left_idx])
            {
                swap(v[left_idx], v[cur_idx]);
                cur_idx = left_idx;
            }
            else if (v[right_idx] < v[left_idx] && v[cur_idx] > v[right_idx])
            {
                swap(v[right_idx], v[cur_idx]);
                cur_idx = right_idx;
            }
            else
                break;
        }
        else if (left_idx < v.size())
        {
            if (v[cur_idx] > v[left_idx])
            {
                swap(v[left_idx], v[cur_idx]);
                cur_idx = left_idx;
            }
            else
                break;
        }
        else if (right_idx < v.size())
        {
            if (v[cur_idx] > v[right_idx])
            {
                swap(v[right_idx], v[cur_idx]);
                cur_idx = right_idx;
            }
            else
                break;
        }
        else
            break;
    }
}
void Print(vector<int> v)
{
    for (int x : v)
        cout << x << " ";
    cout << endl;
}
int main()
{
    vector<int> v;
    Insert(v);
    cout << "Vector After Insert" << endl;
    Print(v);
    Delete(v);
    cout << "Vector After Delete" << endl;
    Print(v);
    Delete(v);
    Print(v);
    Delete(v);
    Print(v);

    return 0;
}