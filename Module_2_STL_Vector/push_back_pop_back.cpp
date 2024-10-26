#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 30};
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    v.push_back(40);
    v.push_back(50);
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    v.pop_back();
    v.pop_back();
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}