#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }

    void show()
    {
        cout << val << " " << next << endl;
    }
};

void insertAtTail(Node *&head, int v)
{

    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // temp last node e

    temp->next = newNode;
}

void printing(Node *head)
{

    Node *temp = head;
    cout << "Your Linked List: ";
    while (temp != NULL)
    {
        cout << temp->val << " next: " << temp->next;
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        int op;
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Terminate" << endl;
        cin >> op;

        if (op == 1)
        {
            int val;
            cout << "Please enter value: ";
            cin >> val;
            insertAtTail(head, val);
        }
        else if (op == 2)
        {

            printing(head);
        }
        else if (op == 3)
        {
            break;
        }
    }

    return 0;
}