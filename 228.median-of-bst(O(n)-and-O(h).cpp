void count(struct Node* root, int& n)
{
    if(!root) return;
    count(root->left,n);
    n++;
    count(root->right,n);
}
void helper(struct Node *root,struct Node *&cur,struct Node *&prev, int k, int &c, int& f)
{
    if(!root) return;
    helper(root->left, cur, prev, k, c,f);
    if(prev==NULL)
    {
        prev=root;
        c++;
    }
    else if(c==k)
    {
        cur=root;
        c++;
        f=1;
        return;
    }
    else if(f==0){
        c++;
        prev=root;
    }
    helper(root->right, cur, prev, k, c, f);
}
float findMedian(struct Node *root)
{
    int n=0;
    count(root,n);
    struct Node* cur=NULL;
    struct Node* prev=NULL;
    int k=(n/2) +1;
    int c=1,f=0;
    helper(root, cur, prev, k, c, f);
    float ans;
    if(n%2==0)
    {
        ans= (cur->data + prev->data)*1.0/2*1.0;
        return ans;
    }
    else
    {
        ans=(cur->data)*1.0;
        return ans;
    }
      //Code here
}
