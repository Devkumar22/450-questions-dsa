#include <bits/stdc++.h>
using namespace std;

long long int maxSum(int arr[], int n)
{
    sort(arr, arr+n);
    
    vector<int> v;
    for(int i=0;i<n/2;i++)
    {
        v.push_back(arr[i]);
        v.push_back(arr[n-i-1]);
        
    }
    if(n%2!=0)
        v.push_back(arr[n/2]);
    
    long long int sum=0;
    for(int i=1;i<n;i++)
    {
        sum+=abs(v[i]-v[i-1]);
    }
    sum+=abs(v[0]-v[n-1]);
    return sum;
}