#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int id;
    Student(string name, int id)
    {
        this->name = name;
        this->id = id;
    }
};
class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.name == b.name)
        {
            return a.id < b.id;
        }
        return a.name > b.name;
    }
};
int main()
{
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> pq;
    while (n--)
    {
        string s;
        cin >> s;
        int x;
        cin >> x;
        Student obj(s, x);
        pq.push(obj);
    }
    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().id << endl;
        pq.pop();
    }

    return 0;
}