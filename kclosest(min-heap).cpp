struct compare{
    bool operator()(pair<int,int> a,pair<int,int> b){
        if(a.first==b.first)
        {
            return a.second<b.second;
        }
        return a.first>b.first;
    }
};
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
       priority_queue<pair<int,int>,vector<pair<int,int>>,compare>v;
    
        for(int i=0;i<n;i++)
        {
            v.push({abs(arr[i]-x), arr[i]});
            
        }
       
        vector<int> res;
        while(k > 0)
        {
            if(v.top().second!=x){
            res.push_back(v.top().second);
            
            k--;
            }
            v.pop();
        }
        // reverse(res.begin(), res.end());
        return res;
        // code here
    }
};