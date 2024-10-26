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
void Insert_at_head(Node *&head)
{
    cout << "Enter a new Node :" << endl;
    int val;
    cin >> val;
    Node *new_node = new Node(val);
    new_node->next_address = head;
    head = new_node;
}
void Insert_at_any_Position(Node *&head)
{
    int pos, val;
    cout << "Enter The position :" << endl;
    cin >> pos;

    if (pos == 1)
    {
        Insert_at_head(head);
    }

    else
    {
        cout << "Enter The Value :" << endl;
        cin >> val;
        Node *new_node = new Node(val);
        Node *temp = head;
        for (int i = 1; i < pos - 1; i++)
        {
            temp = temp->next_address;
            if (temp == NULL)
            {
                cout << "Invalid Index" << endl;
                return;
            }
        }

        new_node->next_address = temp->next_address;
        temp->next_address = new_node;
    }
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
void Delete_any_oposition(Node *&head)
{
    cout << "Enter Position :"
         << " ";
    int pos;
    cin >> pos;
    if (pos == 1)
    {
        if (head == NULL)
        {
            if (head == NULL)
            {
                cout << "Invalid Index" << endl;
                return;
            }
        }
        Node *deleteNode = head;
        head = head->next_address;
        delete deleteNode;
    }
    else
    {
        Node *temp = head;
        for (int i = 1; i < pos - 1; i++)
        {
            temp = temp->next_address;
            if (temp == NULL)
            {
                cout << "Invalid Index" << endl;
                return;
            }
        }
        Node *deleteNode = temp->next_address;
        temp->next_address = temp->next_address->next_address;
        delete deleteNode;
    }
}
int main()
{
    Node *head = NULL;
    while (1)
    {
        int n;
        cout << "1.Insert at tail" << endl;
        cout << "2.Insert at ANy Position" << endl;
        cout << "3.Insert at Head When(head !=NUll)" << endl;
        cout << "4.Print Linked List" << endl;
        cout << "5.Delete any position" << endl;
        cout << "6.Terminate" << endl;
        cout << "Enter your Option:" << endl;
        cin >> n;
        if (n == 1)
            Insert_at_Tail(head);
        if (n == 2)
            Insert_at_any_Position(head);
        else if (n == 3)
            Insert_at_head(head);
        else if (n == 4)
            Reursive_Print_linked_list(head);
        else if (n == 5)
            Delete_any_oposition(head);
        else if (n == 6)
            break;
        else
            cout << "Wrong Option... " << endl;
    }

    return 0;
}