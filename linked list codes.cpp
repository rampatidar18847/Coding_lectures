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

    while (temp->next!= NULL)
    {
        if(temp->next == NULL)
        {
            temp = temp->prev;
            break;
        }else
        {
            temp = temp->next;
        }
    }
    cout << endl;
    cout << "reverse : ";
    Node *curr = temp;
    while(count < 8)
    {
        cout << curr->data << " ";
        curr = curr->prev;
        count++;
    }

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

        int count = 1;
        while (index > count)
        {
            prev = temp;
            temp = temp->next;
            count++;
        }
        temp->prev = NULL;
        prev->next = temp->next;
        temp->next = NULL;
        free(temp);
    }
}

bool detectloop(Node * head)
{
    if(head == NULL)
    {
        return false;
    }

    map<Node *, bool> visited;

    Node *temp = head;

    while (temp!=NULL && temp!=head)
    {
        if(visited[temp] == true)
        {
            cout << "circular linked list" << endl;
        }

        visited[temp] = true;
        temp = temp->next;
    }

    return false;
}

Node* floyddectectloop(Node *head)
{
   if(head == NULL)
   {
       return 0;
   }

   Node *slow = head;
   Node *fast = head;

   while (slow!=NULL && fast!=NULL)
   {
       fast = fast->next;
       if(fast!=NULL)
       {
           fast = fast->next;
       }
       slow = slow->next;

       if(slow == fast)
       {
           cout << "circular list" << endl;
       }
   }

   return slow;
}

Node* startingnode(Node * head)
{
    if(head == NULL)
    {
        cout<<"empty";
    }
    Node *intersection = floyddectectloop(head);
    Node *slow = head;

    while(intersection!= intersection && slow!=intersection)
    {
        intersection = intersection->next;
        slow = slow->next;
    }

    return slow;
}

void removeloop(Node* head)
{
    if(head==NULL)
    {
        return;
    }

    Node* startnode = startingnode(head);
    Node *temp = startnode;

    while (temp->next!=startnode)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}

void length(Node * &head)
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
    pop(head, 3);
    pop(head, 11);
    print(head);
    length(head);
    reverse(head);

    if(detectloop(head)!=NULL)
    {
        cout << "circular" << endl;
    }else
    {
        cout << "not" << endl;
    }

    Node * a = floyddectectloop(head);
    cout << a->data << endl;
    Node * loop = startingnode(head);
    cout << loop->data;

    removeloop(head);
}