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
};

void insetOneToTail(Node *&head, int val)
{
    Node *newNode = new Node(val);

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
    // last ghore

    temp->next = newNode;
}

void printing(Node *head)
{

    Node *temp = head;

    cout << "Your Linked list: ";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // int *ptr = NULL;
    // int x = 10;
    // ptr=&x;
    Node *head = NULL; // head address  head er value   head er  next
    // cout << head;
    while (true)
    {
        // break;

        int op;
        cout << "Select Option: " << endl;
        cout << "Option 1 for insert :" << endl;
        cout << "Option 2 for print :" << endl;
        cout << "Option 3 for terminate :" << endl;

        cin >> op;

        if (op == 1)
        {
            int val;
            cout << "Give your value: ";
            cin >> val;
            insetOneToTail(head, val);
        }
        else if (op == 2)
        {
            printing(head);
        }
        else if (op == 3)
        {
            break;
        }
        else
        {
            cout << "Wrong! Please choose again!" << endl;
            continue;
        }
    }

    return 0;
}