#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};
 
/* Helper function that allocates a new node
   with the given data and NULL left and right
   pointers. */
Node* getNode(int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}


void inorder(Node* root, vector<int>& v)
{
    if(!root) return;
    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
}
void preorder(Node* root, vector<int> v,int *i)
{
    if(!root) return;
    root->data=v[++*i];
    preorder(root->left, v, i);
    preorder(root->right, v, i);
}
void print(Node* root)
{
    if(!root) return;
    cout<< root->data;
    print(root->left);
    print(root->right);
}
int main() {

    Node *root = getNode(4);
    root->left = getNode(2);
    root->right = getNode(6);
    root->left->left = getNode(1);
    root->left->right = getNode(3);
    root->right->left = getNode(5);
    root->right->right = getNode(7);

    vector<int> v;
    inorder(root, v);
    int i=-1;
    preorder(root, v, &i);
    print(root);

}
