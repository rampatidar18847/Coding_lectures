#include <bits\stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insertatbegin(Node *&head, int data)
{
    Node *node = new Node(data);

    node->next = head;
    head->prev = node;
    head = node;
}

void append(Node *&head, int data)
{
    Node *node = new Node(data);
    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = node;
    node->prev = temp;
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void reverse(Node *&head)
{
    int count = 0;
    Node *temp = head;

    while (temp->next != NULL)
    {
       
        temp = temp->next;
        
    }
    cout << endl;
    cout << "reverse : ";
    Node *curr = temp;
    while (curr->prev!=NULL)
    {
        cout << curr->data << " ";
        curr = curr->prev;
        
    }
    cout<<curr->data;
    cout << endl;
}

void middle(Node *&head, int data, int index)
{
    if (index == 1)
    {
        insertatbegin(head, data);
        return;
    }
    int count = 1;
    Node *temp = head;
    Node *curr = head;

    while (index > count)
    {
        count++;
        if (index == count)
        {
            Node *node = new Node(data);
            curr = temp->next;
            node->next = curr;
            curr->prev = node;
            temp->next = node;
            node->prev = temp;
        }
        temp = temp->next;
    }
}

void pop(Node *&head, int index)
{
    if (index == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        head->prev = NULL;
        free(temp);
    }
    else
    {
        Node *temp = head;
        Node *prev = head;
        Node *forw = NULL;

        int count = 1;
        while (index > count)
        {
            prev = temp;
            temp = temp->next;
            count++;
        }
        forw = temp->next;
        temp->prev = NULL;
        prev->next = temp->next;
        forw->prev = prev;
        temp->next = NULL;
        free(temp);
    }
}

void length(Node *&head)
{
    int count = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    cout << "length : " << count << endl;
}

int main()
{
    Node *node1 = new Node(3);

    Node *head = node1;

    insertatbegin(head, 2);
    insertatbegin(head, 1);
    insertatbegin(head, 0);
    insertatbegin(head, -1);
    append(head, 4);
    append(head, 5);
    append(head, 11);
    middle(head, 9, 2);
    middle(head, 7, 7);
    middle(head, 8, 7);
    middle(head, 20, 5);
     print(head);
//    pop(head, 5);
   // pop(head, 11);
//    print(head);
   // length(head);
   reverse(head);
}
