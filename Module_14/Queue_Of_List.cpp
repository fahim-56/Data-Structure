#include <bits/stdc++.h>
using namespace std;
class myQueue
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_front();
    }
    int front()
    {
        return l.front();
    }
    int size()
    {
       return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};
int main()
{
    myQueue Q;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        Q.push(x);
    }
    while (!Q.empty())
    {
        cout << Q.front() << " ";
        Q.pop();
    }

    return 0;
}