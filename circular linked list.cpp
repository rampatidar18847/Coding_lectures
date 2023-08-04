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

void insert(Node *&tail, int element, int data)
{
    if (tail == NULL)
    {
        Node *node = new Node(data);
        tail = node;
        node->next = node;
    }
    else
    {
        Node *temp = tail;
        while (temp->data != element)
        {
            temp = temp->next;
        }
        Node *node = new Node(data);
        node->next = temp->next;
        temp->next = node;
    }
}

void pop(Node *tail, int element)
{
    if (tail == NULL)
    {
        cout << "list is empty" << endl;
    }
    else
    {
        Node *prev = tail;
        Node *curr = prev->next;
       

        while (curr->data != element)
        {
            prev = curr;
            curr = curr->next;
           
        }

        prev->next = curr->next;
        if (tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
        
        
    }
}

void print(Node *tail)
{
    Node *temp = tail;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail);
    
    cout<<endl;
}

int main()
{
    Node *tail = NULL;

    insert(tail, 4, 9);
    insert(tail, 9, 7);
    
    insert(tail, 7, 6);
    
    insert(tail, 6, 13);
    insert(tail,7,5);
    insert(tail,13,14);
    insert(tail,7,70);
    insert(tail,6,60);
    
    print(tail);
//    pop(tail, 9);

    print(tail);
}
