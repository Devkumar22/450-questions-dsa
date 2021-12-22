vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        priority_queue<int> p;
        for(int i=0;i<n;i++)
        {
            p.push(a[i]);
            
        }
        for(int i=0;i<m;i++)
        {
            p.push(b[i]);
        }
        
        vector<int> v;
        while(!p.empty())
        {
            v.push_back(p.top());
            p.pop();
        }
        return v;
        // your code here
    }