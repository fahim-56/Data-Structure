#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> Mylist = {10, 20, 30, 40, 50};
    cout << "Size: " << Mylist.size() << endl;
    cout << "Max Size : " << Mylist.max_size() << endl;
    cout << "Check Empty or not : " << Mylist.empty() << endl;
    cout << "Front : " << Mylist.front() << endl;

    Mylist.clear();
    cout << "Size after clear: " << Mylist.size() << endl;

    cout << "Check Empty or not : " << Mylist.empty() << endl;
    cout << "Front after Clear : " << Mylist.front() << endl;

    list<int> Mylist = {10, 20, 30, 40, 50};
    for (int val : Mylist)
        cout << val << " ";
    cout << endl;
    Mylist.resize(2);
    for (int val : Mylist)
        cout << val << " ";
    cout << endl;
    Mylist.resize(5, 100);
    for (int val : Mylist)
        cout << val << " ";
    return 0;
}