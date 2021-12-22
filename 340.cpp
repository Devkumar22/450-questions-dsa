int kthSmallest(int arr[], int l, int r, int k) {
    // approach-1  sort(arr,arr+r+1);
    //   int m=k-1;
    //   int small= arr[m];
    //   return small;
     //approach-2
     priority_queue<int> q;
     for(int i=l;i<=r;i++)
     {
        q.push(arr[i]);
        if(q.size()>k)
        q.pop();
        
     }
     return q.top();
        //code here
    }