class Solution{
public:
    Node* divide(int N, Node *head){
        Node* even=NULL;
        Node* odd=NULL;
        Node* e=NULL;
        Node* o=NULL;
        while(head!=NULL)
        {
            if((head->data)%2==0)
            {
                if(even==NULL)
                {
                    e=head;
                    even=head;
                    
                }
                else
                {
                    e->next=head;
                    e=e->next;
                    
                }
            }
            else
            {
                if(odd==NULL)
                {
                    odd=head;
                    o=head;
                }
                else
                {
                    o->next=head;
                    o=o->next;
                    
                    
                }
                
            }
            head=head->next;
        }
        if(e) e->next=odd;
        if(o) o->next=NULL;
        if(even)return even;
        return odd;
        // code here
    }
};