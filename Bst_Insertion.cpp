#include <iostream>
using namespace std;

class Node{
    public:
    int key;
    Node * left;
    Node *right;
    Node(int data)
    {
        key = data;
        left = right = NULL;
    }
};

Node *Insert(Node *root, int key)
{
    if(root == NULL)
    {
        return new Node(key);
    }

    if(key < root->key)
    {
        root->left = Insert(root->left, key);
    }
    else
    {
        root->right = Insert(root->right, key);
    }
    return root;
}

void PrintInOrder(Node *root)
{
    if(root == NULL)
    {
        return;
    }

    PrintInOrder(root->left);
    cout<<root->key<<" ";
    PrintInOrder(root->right);

}


int main()
{
    Node * root = NULL;
    int arr[] = {8, 3, 10, 1, 6, 14, 4, 7, 13};

    for(int x :  arr)
    {
        root = Insert(root, x);
    }
    PrintInOrder(root);
    return 0;
}

