#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 30};
    vector<int> V = {1, 2, 3};
    V=v;
    // V.assign(v.begin(),v.end());
    for(int x: v)
    {
    cout<<x<<" ";
    }
    cout<<endl;
    for(int x: V)
    {
    cout<<x<<" ";
    }
    return 0;
}