#include <bits/stdc++.h>
using namespace std;

//diff b/w max choc &min choc is minimum
//chocolate distribution problem

long long findMinDiff(vector<long long> a, long long n, long long m){
        sort(a.begin(), a.end());
        long long diff=0;
        long long newdiff=a[m-1]-a[0];
        for(int i=1;i<n-m+1;i++)
        {
            diff=a[m-1+i]-a[i];
            newdiff=min(newdiff,diff);
        }
        return newdiff;
    //code
    
    }   