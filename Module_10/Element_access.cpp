#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> Mylist = {10, 20, 30, 40, 50};
    cout << Mylist.front() << " ";
    cout << *next(Mylist.begin(), 1) << " ";
    cout << *next(Mylist.begin(), 2) << " ";
    cout << *next(Mylist.begin(), 3) << " ";
    cout << Mylist.back() << endl;
    for (int i = 0; i < Mylist.size(); i++)
        cout << *next(Mylist.begin(), i) << " ";

    return 0;
}