#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool check(int mid, int a[],int c, int p)
{
    int prata=0,time=0;
    for(int i=0;i<c;i++)
    {
        int j=2,time=a[i];
        while(time<=mid)
        {
            prata++;
            time+=j*a[i];
            j++;
        }
        if(prata>=p)
            return true;
    }
    
    return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p;
        cin>>p;
        int c,ans=0;
        cin>>c;
        int r[c];
        for(int i=0;i<c;i++)
        {
            cin>>r[i];
        }
        int lo=0;
        int hi=1e8;
        while(lo<hi)
        {
            int mid=(lo+hi)/2;
            if(check(mid,r,c,p))
            {
                ans=mid;
                hi=mid;
            
            }
            else
                lo=mid+1;
        }
        cout << ans << endl;
    }
    
}

