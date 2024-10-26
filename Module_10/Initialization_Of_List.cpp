#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> myList;
    // cout<<myList.size();

    // list<int> myList(10);
    // cout << myList.size()<<endl;
    // cout << myList.front() << endl;

    // list<int> myList(10, 56);
    // cout << myList.size() << endl;
    // cout << myList.front() << endl;
    // for (auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    // list<int> mylist = {10, 20, 30, 40, 50};
    // list<int> myList(mylist);
    // cout << myList.size() << endl;
    // for (auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    // int arr[] = {10, 20, 30, 40, 50};
    // list<int> myList(arr, (arr + ((sizeof(arr))/4)));
    // cout << myList.size() << endl;
    // for (auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    vector<int> v = {10, 20, 30, 40, 50};
    list<int> myList(v.begin(), v.end());
    cout << myList.size() << endl;
    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}