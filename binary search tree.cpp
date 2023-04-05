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

void levelordertravelsal(node *root)
{

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

node *insertbst(node *root, int d)
{

    if (root == NULL)
    {
        root = new node(d);
        return root;
    }

    if (d < root->data)
    {
        root->left = insertbst(root->left, d);
    }
    else
    {
        root->right = insertbst(root->right, d);
    }
    return root;
}

void insertnode(node *&root)
{
    int d;
    cin >> d;

    while (d != -1)
    {

        root = insertbst(root, d);
        cin >> d;
    }
}

node *minvalue(node *root)
{
    node *temp = root;

    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

node *maxvalue(node *root)
{
    node *temp = root;

    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}

node *deletenode(node *root, int x)
{

    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == x)
    {
        // both null
        if (root->left == NULL && root->right == NULL)
        {
            delete (root);
            return NULL;
        }
        // left node not null
        if (root->left != NULL && root->right == NULL)
        {
            node *temp = root->left;
            delete (root);
            return temp;
        }

        // right node not null
        if (root->left == NULL && root->right != NULL)
        {
            node *temp = root->right;
            delete (root);
            return temp;
        }
        // 2 node not null
        if (root->left != NULL && root->right != NULL)
        {
            int mini = minvalue(root->right)->data;
            root->data = mini;
            root->right = deletenode(root->right, mini);
            return root;
        }
    }
    else
    {
        while (root != NULL)
        {
            if (x > root->data)
            {
                root->right = deletenode(root->right, x);
                return root;
            }
            else
            {
                root->left = deletenode(root->left, x);
                return root;
            }
        }
    }
    return root;
}
int main()
{
    node *root = NULL;
    cout << "enter data : ";
    insertnode(root);

    levelordertravelsal(root);
    cout << "min value" << minvalue(root)->data << endl;
    cout << "max value" << maxvalue(root)->data << endl;
    deletenode(root, 40);
    levelordertravelsal(root);
}

// 10 8 21 7 27 5 4 3 -1