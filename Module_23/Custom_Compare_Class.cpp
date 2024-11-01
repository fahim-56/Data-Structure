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
    priority_queue<Student, vector<Student>, cmp> q;
    int n;
    cin >> n;
    while (n--)
    {
        string name;
        int id;
        int marks;
        cin >> name >> id >> marks;
        Student obj(name, id, marks);
        q.push(obj);
    }
    cout << "Printing" << endl;
    while (!q.empty())
    {
        cout << q.top().name << " " << q.top().id << " " << q.top().marks << endl;
        q.pop();
    }

    return 0;
}