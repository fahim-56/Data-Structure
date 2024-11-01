#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList;
    int q;
    cin >> q;
    int x, v;
    while (q--)
    {
        cin >> x >> v;
        if (x == 0)
            myList.push_front(v);
        else if (x == 1)
            myList.push_back(v);
        else if (x == 2)
        {
            if (v >= myList.size())
            {
            }
            else
                myList.erase(next(myList.begin(), v));
        }
        cout << "L -> ";
        for (int val : myList)
            cout << val << " ";
        cout << endl;
        list<int> new_List(myList);
        new_List.reverse();
        cout << "R -> ";
        for (int val : new_List)
            cout << val << " ";
        cout << endl;
    }

    return 0;
}