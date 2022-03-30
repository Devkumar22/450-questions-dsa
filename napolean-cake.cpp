#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int res[n]={0};
        int cream=arr[n-1];
        for(int i=n-1;i>=0;i--)
        {
            if(cream> 0 || arr[i]>0)
            {
                res[i]=1;
                cream=max(cream,arr[i]);
                cream--;
            }
            else{
                cream=arr[i];
            }

        }
        for(int i=0;i<n;i++)
        {
            cout<<res[i]<<' ';
        }
        cout<<endl;
    }
    return 0;
    
}
