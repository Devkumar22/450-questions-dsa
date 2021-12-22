vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        priority_queue<int, vector<int>, greater<int>> p;
        for(int i=0;i<K;i++)
        {
            for(int j=0;j<K;j++)
            {
                p.push(arr[i][j]);
            }
        }
        vector<int> v;
        while(!p.empty())
        {
            v.push_back(p.top());
            p.pop();
        }
        return v;
        //code here
    }