#include <bits/stdc++.h>
using namespace std;
int main() {
    int te;
    cin>> te;
    while(te--)
    {
        long long int n,k,b,t;
        cin >> n >> k >> b >> t;
        long long int x[n],v[n];
        for(long long int i=0;i<n;i++) cin>>x[i];
        for(long long int i=0;i<n;i++)
        { 
            cin>>v[i];
           
        }

        // vector<pair<int,int>> vp;
        // for(int i=0;i<n;i++) vp.push_back(v[i], x[i]);

        //  sort(v,v+n);
        long long int swaps=0,kcount=0,obstruction=0;
        for(long long int i=n-1;i>=0;i--)
        {
            if(v[i]*t + x[i]  >= b)
            {
                kcount++;
                if(obstruction > 0)
                    swaps+=obstruction;

            }
            else
                obstruction++;

            if(kcount >=k) break;
            
        }

       if(kcount>=k)
        cout<< "Case #" << te << ": "<< swaps<< endl;
        else
        cout<< "Case #"<< te <<": "<< "IMPOSSIBLE"<< endl;

    }
    
}
