const int alphabetsize = 26;
struct TrieNode{
    struct TrieNode *children[alphabetsize];
    bool isEndofWord;
};
struct TrieNode *getNode(void)
{
    struct TrieNode *curr = new TrieNode;
    curr->isEndofWord=false;
    for(int i=0;i<26;i++)
    {
        curr->children[i]=NULL;
        
    }
    return curr;
};

void insert(struct TrieNode *root, string s)
{
    struct TrieNode *curr=root;
    
    for(int i=0;i<s.size();i++)
    {
        int index=s[i]-'a';
        if(curr->children[index]==NULL)
            curr->children[index] = getNode();
        curr=curr->children[index];
    }
    curr->isEndofWord=true;
}
bool search(struct TrieNode *root, string s)
{
    struct TrieNode *curr=root;
    
    for(int i=0;i<s.size();i++)
    {
        int index=s[i]-'a';
        if(curr->children[index]==NULL)
            return false;
        curr=curr->children[index];
    }
    
    return (curr!=NULL && curr->isEndofWord);
}

class Solution
{
public:
    bool solve(string A, struct TrieNode *root)
    {
        
        if(A.length()==0)
            return true;
        
        
        for(int i=1; i<=A.size(); i++)
        {
            if(search(root, A.substr(0,i)) && solve(A.substr(i,A.length()), root))
                return true;
            
        }
        return false;
    }
    int wordBreak(string A, vector<string> &B) {
    
        struct TrieNode *root =getNode();    
        for(int i=0;i<B.size();i++)
        {
            insert(root,B[i]);
        }
        bool ans = solve(A,root);
    
        if(ans) return 1;
        else return 0;
        //code here
    }
};