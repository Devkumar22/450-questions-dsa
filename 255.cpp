#include <bits/stdc++.h>
using namespace std;

int MaxSumDifference(int a[], int n)
{
    sort(a, a+n);
    vector<int> v;
    int sum=0;
    for(int i=0;i<n/2;i++)
    {
        v.push_back(a[i]);
        v.push_back(a[n-i-1]);
    }
    if(n%2!=0)
    {
        v.push_back(a[n/2]);
    }
    for(int i=1;i<n;i++)
    {
        sum += abs(v[i]-v[i-1]);   
    }
    sum+= abs(v[0]-v[n-1]);
    return sum;
}

int main()
{
    int a[] = { 1, 2, 4, 8 };
    int n = sizeof(a) / sizeof(a[0]);
 
    cout << MaxSumDifference(a, n) << endl;
}
