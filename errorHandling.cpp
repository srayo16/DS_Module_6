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
    cout << endl
         << "Inserted at tail!" << endl
         << endl;
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

void pos(Node *head, int p, int v)
{
    Node *newNode = new Node(v);
    Node *temp = head;
    int tempAdd;

    for (int i = 1; i <= (p - 1); i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << endl
                 << endl
                 << "Not valid!" << endl
                 << endl;
            return;
        }
    }
    newNode->next = temp->next;
    // cout << temp << " " << temp->next << endl;
    temp->next = newNode;

    cout << "Inserted at the position" << endl
         << endl;
}

void posToHead(Node *&head, int v)
{

    Node *newNode = new Node(v);

    // cout << newNode->next << " ";
    newNode->next = head;
    head = newNode;
    // cout << newNode->next << " ";
    cout << endl
         << "Inserted at head!" << endl
         << endl;
}

void deleteAny(Node *head, int p)
{

    Node *temp = head;
    Node *temp2 = head;
    int i = 1;
    int t = p - 1;
    while (i != t)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << endl
                 << endl
                 << "Not valid!" << endl
                 << endl;
            return;
        }
        i++;
    }
    if (temp->next->next == NULL)
    {
        cout << endl
             << endl
             << "Not valid!" << endl
             << endl;
        return;
    }
    temp2 = temp->next;
    temp->next = temp2->next;

    delete temp2;

    cout << endl
         << "Deleted!" << endl
         << endl;
}

void deleteHead(Node *&head)
{
    if (head == NULL)
    {
        cout << endl
             << endl
             << "Not valid!" << endl
             << endl;
        return;
    }
    Node *temp = head;

    head = temp->next;
    delete temp;

    cout << endl
         << "Deleted Head!" << endl
         << endl;
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
        cout << "Option 1 for insert to tail:" << endl;
        cout << "Option 2 for print :" << endl;
        cout << "Option 3 for insert to any position:" << endl;
        cout << "Option 4 for insert to head:" << endl;
        cout << "Option 5 for Delete any position:" << endl;
        cout << "Option 6 for Delete Head:" << endl;
        cout << "Option 7 for terminate :" << endl;

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
            cout << "Enter position and value: ";
            int p, v;
            cin >> p >> v;
            if (p == 1)
            {
                posToHead(head, v);
            }
            else
            {

                pos(head, p, v);
            }
        }
        else if (op == 4)
        {
            cout << "Enter value to set head: " << endl;
            int v;
            cin >> v;
            posToHead(head, v);
        }
        else if (op == 5)
        {
            int p;
            cout << "Enter your delete position: ";
            cin >> p;
            if (p == 1)
            {
                deleteHead(head);
            }
            else
            {

                deleteAny(head, p);
            }
        }
        else if (op == 6)
        {
            deleteHead(head);
        }
        else if (op == 7)
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