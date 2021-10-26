void counted(Node* root, int l,int h, int &c)
{
    if(!root) return ;
    
    if(root->data >= l && root->data <= h)
        c++;
    counted(root->left,l,h,c);
    counted(root->right,l,h,c);
}
int getCount(Node *root, int l, int h)
{
    int c=0;
    counted(root,l,h,c);
    
    return c;
  // your code goes here   
}