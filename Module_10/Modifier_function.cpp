#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> Mylist = {1, 2, 3, 4, 5, 6, 7};
    list<int> Newlist;
    Newlist = Mylist;
    Newlist.push_back(4);
    Newlist.push_back(5);
    Newlist.pop_back();
    Newlist.pop_back();

    Newlist.push_front(0);
    Newlist.pop_front();

    for (int val : Newlist)
        cout << val << " ";
    cout << endl;

    Mylist.insert(next(Mylist.begin(), 3), 100);
    Mylist.insert(next(Mylist.begin(), 2), {100, 200, 300});
    list<int> NewList = {10, 20, 30};
    Mylist.insert((next(Mylist.begin(), 3)), NewList.begin(), NewList.end());
    vector<int> v = {4, 5, 6};
    Mylist.insert((next(Mylist.begin(), 3)), v.begin(), v.end());
    Mylist.erase(next(Mylist.begin(), 2), next(Mylist.begin(), 5));

    replace(Mylist.begin(), Mylist.end(), 3, 100);
    for (int val : Mylist)
        cout << val << " ";
    cout << endl;
    auto it = find(Mylist.begin(), Mylist.end(), 5);
    if (it == Mylist.end())
        cout << "Not Found" << endl;
    else
        cout << "Found" << endl;

    return 0;
}