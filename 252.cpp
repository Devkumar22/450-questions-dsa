#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n=5,prod=1, even=0,zero=0,neg=0;
    int arr[n]={0,5,0,0,7};
    int max_negative=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {  
            zero++;
            continue;
        }
        if(arr[i]<0)
        {
            neg++;
            max_negative=max(max_negative,arr[i]);
        }
        prod=prod*arr[i];

    }
    if(zero==n) cout<<0;

    
    else if(neg==1  && zero+neg==n)
    {
        cout<<0;
    }
     else if(neg%2!=0)
     {
         prod=prod/max_negative;
         cout<<prod;
     }  
     else cout<<prod; 
  }

