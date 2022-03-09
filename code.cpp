#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while(t--)
    {
        long long int n,x;cin>>n>>x;
        long long int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>> arr[i];
        }
        long long int res=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i] < x)
            {
                res=i+1;
            }
        }
        cout<<res<<endl;
    }
    
}
