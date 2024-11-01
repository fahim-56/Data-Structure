#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int id;
    int marks;
    Student(string name, int id, int marks)
    {
        this->name = name;
        this->id = id;
        this->marks = marks;
    }
};
class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks == b.marks)
            return a.id > b.id;
        return a.marks < b.marks;
    }
};
int main()
{
    priority_queue<Student, vector<Student>, cmp> pq;
    int n;
    cin >> n;
    while (n--)
    {
        string S;
        cin >> S;
        int id;
        cin >> id;
        int marks;
        cin >> marks;
        Student obj(S, id, marks);
        pq.push(obj);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 0)
        {
            string S;
            cin >> S;
            int id;
            cin >> id;
            int marks;
            cin >> marks;
            Student obj(S, id, marks);
            pq.push(obj);
            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top().name << " " << pq.top().id << " " << pq.top().marks << endl;
        }
        else if (cmd == 1)
        {
            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top().name << " " << pq.top().id << " " << pq.top().marks << endl;
        }
        else if (cmd == 2)
        {
            if (!pq.empty())
                pq.pop();
            if (pq.empty())
                cout << "Empty" << endl;
            else
            {
                cout << pq.top().name << " " << pq.top().id << " " << pq.top().marks << endl;
            }
        }
        else
            cout << "Empty" << endl;
    }

    return 0;
}