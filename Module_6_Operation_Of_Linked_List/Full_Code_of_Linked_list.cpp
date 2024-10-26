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

void add_node(Node *&head)
{
    if (head == NULL)
    {
        cout << "Enter the first node : " << endl;
        int val;
        cin >> val;
        Node *new_node = new Node(val);
        head = new_node;
        cout << "First node added" << endl;
    }
    else
    {
        cout << "Enter the new node To insert at Tail : " << endl;
        int n;
        cin >> n;
        Node *new_node = new Node(n);
        Node *temp = head;
        while (temp->next_address != NULL)
        {
            temp = temp->next_address;
        }
        temp->next_address = new_node;
        cout << "Another node added" << endl;
    }
}

void print_linked_list(Node *&head)
{
    Node *temp = head;
    cout << "Linked List : ";
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next_address;
    }
    cout << endl
         << endl;
}

void add_node_anywhere(Node *&head)
{
    cout << "Which position you want to Insert : " << endl;
    int n;
    cin >> n;
    cout << "Which value you want to Insert : " << endl;
    int val;
    cin >> val;
    Node *new_node = new Node(val);
    if (n == 1)
    {
        new_node->next_address = head;
        head = new_node;
    }
    else
    {
        Node *temp = head;
        for (int i = 1; i < n - 1; i++)
        {
            temp = temp->next_address;
        }
        new_node->next_address = temp->next_address;
        temp->next_address = new_node;
    }
}

void delete_node(Node *&head)
{
    cout << "Enter the delete Position : " << endl;
    int n;
    cin >> n;
    Node *temp = head;
    for (int i = 1; i < n - 1; i++)
    {
        temp = temp->next_address;
    }
    if (n == 1)
    {
        Node *delete_node = head;
        head = temp->next_address;
        delete delete_node;
        cout << "Node delete at " << n << "th position" << endl;
    }
    else
    {
        Node *delete_node = temp->next_address;
        temp->next_address = temp->next_address->next_address;
        delete delete_node;
    }
}

int main()
{
    Node *head = NULL;
    while (1)
    {
        cout << "1.Add node\n2.Delete Node\n3.Insert any position at middle\n5.print Linked List\n";
        int n;
        cin >> n;
        if (n == 1)
            add_node(head);
        else if (n == 2)
            delete_node(head);
        else if (n == 3)
            add_node_anywhere(head);
        else if (n == 5)
            print_linked_list(head);
        else
            cout << "You Select wrong Option..." << endl
                 << endl;
    }
    return 0;
}