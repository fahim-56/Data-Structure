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
void Insert_at_Tail(Node *&head)
{
    cout << "Enter a new Node :" << endl;
    int val;
    cin >> val;
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        return;
    }
    else
    {
        Node *tail = head;
        while (tail->next_address != NULL)
        {
            tail = tail->next_address;
        }
        tail->next_address = new_node;
    }
    return;
}
void Reursive_Print_linked_list(Node *head)
{
    Node *temp = head;
    cout << "Linked List : ";
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next_address;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    while (1)
    {
        int n;
        cout << "1.Insert at tail" << endl;
        cout << "2.Print Linked List" << endl;
        cout << "3.Terminate" << endl;
        cout << "Enter your Option:" << endl;
        cin >> n;
        if (n == 1)
            Insert_at_Tail(head);
        else if (n == 2)
            Reursive_Print_linked_list(head);
        else if (n == 3)
            break;
        else
            cout << "Wrong Option... " << endl;
    }

    return 0;
}