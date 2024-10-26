#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> Mylist = {10, 20, 30, 40, 50};

    for (auto it = Mylist.begin(); it != Mylist.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    for (int val : Mylist)
    {
        cout << val << " ";
    }
    return 0;
}