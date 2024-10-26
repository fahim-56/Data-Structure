#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 30};
    
    cout << v[1] << endl;
    cout << v.at(1) << endl;

    cout << v[0] << endl;
    cout << v.front() << endl;

    cout << v[v.size() - 1] << endl;
    cout << v.back() << endl;

    return 0;
}