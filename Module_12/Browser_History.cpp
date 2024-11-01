#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<string> myList;
    string str;
    while (1)
    {
        cin >> str;
        if (str == "end")
        {
            break;
        }
        myList.push_back(str);
    }
    int q;
    cin >> q;
    string cmd;
    auto cur = myList.end();
    while (q--)
    {
        cin >> cmd;
        if (cmd == "visit")
        {
            cin >> cmd;
            auto it = find(myList.begin(), myList.end(), cmd);
            if (it == myList.end())
            {
                cout << "Not Available" << endl;
            }
            else
            {
                cout << *it << endl;
                cur = it;
            }
            continue;
        }
        else if (cmd == "next")
        {
            if (cur == next(myList.begin(), (myList.size() - 1)))
            {
                cout << "Not Available" << endl;
            }
            else
            {
                cur++;
                cout << *cur << endl;
            }
        }
        else if (cmd == "prev")
        {
            if (cur == myList.begin())
            {
                cout << "Not Available" << endl;
            }
            else
            {
                cur--;
                cout << *cur << endl;
            }
        }
    }
    return 0;
}