#include <iostream>
using namespace std;

struct node {
    int data;
    node* left;
    node* right;
    node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
 
// Function to print flattened
// binary Tree
void print(node* root)
{
    node* curr = root;
    while (curr != NULL)
        cout << curr->data << " ", curr = curr->right;
}

void inorder(node* root, node*& prev)
{
    if(root == NULL) return;

    inorder(root->left, prev);

    prev->left=NULL;
    prev->right=root;
    prev=root;

    inorder(root->right, prev);

}

node* flatten(node* root)
{
    node* dummy=new node(-1);
    node* prev=dummy;

    inorder(root, prev);

    prev->left=NULL;
    prev->right=NULL;

    node* ans=dummy->right;

    delete dummy;
    return ans;

}


int main()
{
    node* root = new node(5);
    root->left = new node(3);
    root->right = new node(7);
    root->left->left = new node(2);
    root->left->right = new node(4);
    root->right->left = new node(6);
    root->right->right = new node(8);
 
    // Calling required function
    print(flatten(root));

    return 0;
 
}  
