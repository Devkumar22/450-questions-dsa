#include <bits/stdc++.h>
using namespace std;
long long minCost(long long arr[], long long n) {
        long long int cost=0;
    
        priority_queue<long long, vector<long long>, greater<long long>> p;
        for(long long int i=0;i<n;i++)
        {
            p.push(arr[i]);
        }
        long long int x=0,y=0;
        while(p.size()!=1)
        {
            x=p.top();
            p.pop();
            y=p.top();
            p.pop();
            
            p.push(x+y);
            cost+=(x+y);
            
        }
        
        return cost;
        
        // Your code here
    }
int main() {
    long long int n;
    cin>> n;
    long long int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
   long long int x= minCost(arr,n);
    cout<<x<<endl;
}
