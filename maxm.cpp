
#include <iostream>
using namespace std;
class Node
{
public:
    int record;
    Node *left;
    Node *right;
    Node(int d)
    {
        record = d;
        left = NULL;
        right = NULL;
    }
};
Node *insert(Node *root, int record)
{
    if (root == NULL)
    {
        return new Node(record);
    }
    if (record < root->record)
    {
        root->left = insert(root->left, record);
    }
    else if (record > root->record)
    {
        root->right = insert(root->right, record);
    }

    return root;
}
void InOrder(Node *root)
{
    if (root != NULL)
    {
        InOrder(root->left);
        cout << root->record << " ";
        InOrder(root->right);
    }
}
void PostOrder(Node *root)
{
    if (root != NULL)
    {
        PostOrder(root->left);
        PostOrder(root->right);
        cout << root->record << " ";
    }
}
void PreOrder(Node *root)
{
    if (root != NULL)
    {
        cout << root->record << " ";
        PreOrder(root->left);
        PreOrder(root->right);
    }
}
Node *findMax(Node *root)
{
    while (root->right != NULL)
    {
        root = root->right;
    }
    cout << root->record << endl;
}
Node *findMin(Node *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    cout << root->record << endl;
}
Node *findvalue(Node *root, int v)
{
    if (root != NULL || root->record == v)
    {
        return root;
    }
    if (v < root->record)
    {
        root = findvalue(root->left, v);
    }
    else if (v > root->record)
    {
        root = findvalue(root->right, v);
    }
}

int main()
{
    Node *root = NULL;
    root = insert(root, 40);
    insert(root, 30);
    insert(root, 50);
    insert(root, 25);
    insert(root, 35);
    insert(root, 45);
    insert(root, 60);
    insert(root, 15);
    insert(root, 28);
    insert(root, 55);
    insert(root, 70);

    findMin(root);
    findMax(root);
    Node *n = findvalue(root, 60);
    cout << n->record << endl;

    InOrder(root);

    cout << endl;

    PreOrder(root);
    cout << endl;

    PostOrder(root);
    cout << endl;
}