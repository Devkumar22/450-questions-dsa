struct compare
   {
       bool operator()(struct Node* a,struct Node* b)
        {
        return a->data > b->data;
    
        }
   };
    //Function to merge K sorted linked list.
    Node * mergeKLists(Node *arr[], int K)
    {
        // Node* temp=NULL;
        // for(int i=0;i<K;i++)
        // {
        //     temp=merge(temp, arr[i]);
        // }
        // return temp;
        priority_queue<Node*, vector<Node*>, compare> pq;
        for(int i=0;i<K;i++)
        {
            if(arr[i]!=NULL)
                pq.push(arr[i]);
        }
    
        if(pq.empty()) return NULL;
    
    
        Node* dummy=new Node(0);
        Node* last=dummy;
        while(!pq.empty())
        {
            Node* curr=pq.top();
            pq.pop();
    
            last->next=curr;
            last=last->next;
    
            if(curr->next!=NULL)
            {
                pq.push(curr->next);
            }
    
        }
        return dummy->next;
           // Your code here
    }