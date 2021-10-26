#include <iostream>
using namespace std;

void store(node* root, int arr[], int* temp)
{
    store(root->left, arr1, &temp);
    arr[i++]=root->data;
    store(root->right, arr, &temp);

}
int *merge(int arr1[], int arr2[], int m, int n)
{
    int *mergedarr[m+n];
    int i=0,j=0,k=0;
    while(i<m && j<n)
    {
        if(arr1[i] <= arr2[j])
        {
            mergedarr[k++]=arr1[i++];
        }
        else if(arr1[i] > arr2[j])
        {
            mergedarr[k++]=arr2[j++];
        }
    }
    while(i<m)
        mergedarr[k++]=arr1[i++];
    while(j<n)
        mergedarr[k++]=arr2[j++];

    return mergedarr;
}
node* sortedtobst(int arr[], int start, int end)
{
    if(start>end)   return 0;
    int mid=(start+end)/2;
    node* root=new Node(arr[mid]);
    root->left=sortedtobst(arr, start,mid-1);
    root->right=sortedtobst(arr, start,mid+1);
}

node* mergetrees(node* root1, node* root2, int m, int n)
{
    int arr1[m],arr2[n];
    int i=0,j=0;
    store(root1, arr1, &i);

    store(root2, arr2, &j);

    int* mergedarr = merge(arr1, arr2, m, n);
    return sortedtobst(mergedarr, 0,m+n-1);
}



int main() {
    node *root1 = newNode(100);
    root1->left     = newNode(50);
    root1->right = newNode(300);
    root1->left->left = newNode(20);
    root1->left->right = newNode(70);
 
    /* Create following tree as second balanced BST
            80
        / \
        40 120
    */
    node *root2 = newNode(80);
    root2->left     = newNode(40);
    root2->right = newNode(120);
 
    node *mergedTree = mergeTrees(root1, root2, 5, 3);
 
    cout << "Following is Inorder traversal of the merged tree \n";
    printInorder(mergedTree);
 
    return 0;
}
