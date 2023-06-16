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
    int val;

    Node *head = NULL;

    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insetOneToTail(head, val);
    }
    printing(head);

    return 0;
}