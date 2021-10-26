class Solution
{
public:
    map<int, int> m;
    int count=0;
    void help(Node* root1)
    {
        if(!root1) return;
        
        m[root1->data]=1;
        help(root1->left);
        help(root1->right);
        
    }
    void help2(Node* root2, int x)
    {
        if(!root2) return ;
        int temp=x-root2->data;
        if(m.find(temp)!= m.end())
        {
            count++;
        }
        help2(root2->left, x);
        help2(root2->right ,x);
        
    }
    int countPairs(Node* root1, Node* root2, int x)
    {
        
        help(root1);
        
        
        help2(root2,  x);
        
        return count;
    }
};