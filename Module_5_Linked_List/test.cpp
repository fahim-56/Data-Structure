#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next_address;
    Node(int value)
    {
        this->value = value;
        next_address = NULL;
    }
};

// void Add_at_head(Node *(&head))
// {
//     int val;
//     cout << "Enter the value want to add: \n";
//     cin >> val;
//     Node *temp = new Node(val);
//     head = temp;
//     cout << "Added" << endl;
//     return;
// }
void New_Node_Insert(Node *&head, int v)
{
    Node *new_node = new Node(v);
    if (head == NULL)
    {
        head = new_node;
        return;
    }
    Node *tail = head;
    while (tail->next_address != NULL)
    {
        tail = tail->next_address;
    }
    tail->next_address = new_node;
}
int main()
{
    while (1)
    {
        int n;
        cout << "What do you want to do...?\n1.Insert a node\n2.Delete a node\n3.Print linked list\n4.Close Working \nSelect The item number : " << endl;
        cin >> n;
        Node *head = NULL;
        if (n == 1)
        {
            New_Node_Insert(head,100000);
            // Add_at_head(head);
        }
        else if (n == 3)
        {
            Node *temp = head;
            cout<<"Linked List are :";
            while (temp != NULL)
            {
                cout << temp->value << " ";
                temp = temp->next_address;
            }
            cout << endl;
        }
    }
    return 0;
}