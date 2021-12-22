vector<int> kLargest(int arr[], int n, int k) {
	    priority_queue<int> p;
	    for(int i=0;i<n;i++)
	    {
	        p.push(arr[i]);
	    }
	    vector<int> v;
	    for(int i=0;i<k;i++)
	    {
	        v.push_back(p.top());
	        p.pop();
	    }
	    return v;
	    // code here
	}