#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildtree(node *root)
{
    cout << "enter node :";
    int data;
    cin >> data;

    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "enter the data in the left of data " << data << endl;
    root->left = buildtree(root->left);
    cout << "enter the data in the right of data " << data << endl;
    root->right = buildtree(root->right);
    return root;
}

void levelordertravelsal(node *root)
{
    int count = 0;
    queue<node *> q;

    q.push(root);
    q.push(NULL); // using for levelordertraversal

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL) // using for levelordertraversal
        {
            cout << endl;
            count++;          // using for levelordertraversal
            if (!q.empty())   // using for levelordertraversal
            {                 // using for levelordertraversal
                q.push(NULL); // using for levelordertraversal
            }                 // using for levelordertraversal
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    node *root = NULL;

    root = buildtree(root);

     levelordertravelsal(root);

//    inorder(root);
//    postorder(root);
//    preorder(root);
}
