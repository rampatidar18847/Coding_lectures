#include <bits\stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void Insertatbegin(Node *&Head, int data)
{
    Node *node2 = new Node(data);

    node2->next = Head;
    Head = node2;
}

void append(Node *&Head, int data)
{
    Node *node3 = new Node(data);
    Node *temp = Head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = node3;
}

void insertatmiddle(Node *&Head, int data, int index)
{
    if (index == 1)
    {
        Insertatbegin(Head, data);
        return;
    }
    int count = 1;
    Node *temp = Head;

    while (index > count)
    {
        count++;

        if (index == count)
        {
            Node *node4 = new Node(data);
            node4->next = temp->next;
            temp->next = node4;
        }
        temp = temp->next;
    }
}

void print(Node *&Head)
{
    Node *temp = Head;
    cout << "list are: ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void length(Node *&Head)
{
    int count = 0;
    Node *temp = Head;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    cout << "length : " << count << endl;
}

void pop(Node *&Head, int index)
{
    if (index == 1)
    {
        Node *temp = Head;
        Head = Head->next;
        temp->next = NULL;
        free(temp);
    }
    else
    {
        Node *temp = Head;
        Node *prev = Head;
        int count = 1;
        while (index > count)
        {
            prev = temp;
            temp = temp->next;
            count++;
        }
        prev->next = temp->next;
        temp->next = NULL;
        free(temp); // memory free
    }
}

void reverse(Node *&Head)
{
    Node *prev = NULL;
    Node *curr = Head;
    Node *forword = NULL;

    while (curr != NULL)
    {
        forword = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forword;
    }
    Node *temp = prev;
    cout << "reverse list are: ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(3);

    Node *Head = node1;

    Insertatbegin(Head, 2);
    Insertatbegin(Head, 1);
    append(Head, 4);
    append(Head, 5);
    insertatmiddle(Head, 9, 5);
    insertatmiddle(Head, 10, 7);
    append(Head, 11);
//    pop(Head,3);
    print(Head);
    length(Head);
    reverse(Head);
}
