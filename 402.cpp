void insert(struct TrieNode *root, string key)
{
    struct TrieNode *curr=root;
    
    for(int i=0; i<key.length(); ++i)
    {
        int index=key[i] - 'a';
        if(!curr->children[index])
           curr->children[index]= getNode();
        curr=curr->children[index];
    }
    curr->isLeaf=true;
    // code here
}

//Function to use TRIE data structure and search the given string.
bool search(struct TrieNode *root, string key) 
{
    struct TrieNode *curr=root;
     
    for(int i=0; i<key.length(); ++i)
    {
        int index=key[i] - 'a';
        if(curr->children[index] == NULL)
            return false;
        curr=curr->children[index];
    }
    return (curr->isLeaf);
    // code here
}