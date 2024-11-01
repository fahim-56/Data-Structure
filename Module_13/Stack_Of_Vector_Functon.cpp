#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        if (v.size() == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myStack st;
    st.push(100);
    st.push(200);
    st.push(300);
    if (st.empty() != true)
        cout << st.top() << endl;
        
    if (st.empty() != true)
        st.pop();
    if (st.empty() != true)
        cout << st.top() << endl;
    if (st.empty() != true)
        st.pop();
    if (st.empty() != true)
        cout << st.top() << endl;
    if (st.empty() != true)
        st.pop();
    if (st.empty() != true)
        cout << st.top() << endl;

    return 0;
}