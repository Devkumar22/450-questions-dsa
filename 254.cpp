#include <bits/stdc++.h>
using namespace std;

int Maximize(int a[],int n)
    {
        long long int sum=0;
        sort(a, a+n);
        for(long long int i=0;i<n;i++)
            sum+=a[i]*i;
            
        long long int m=1e9 + 7;  
        int res=int(sum%m);
        return res ;
        // Complete the function
    }
