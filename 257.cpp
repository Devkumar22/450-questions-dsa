#include <bits/stdc++.h>
using namespace std;

int minsums(int a[],int b[], int n, int m)
{
    sort(a, a+n);
    sort(b, b+m);
  
    
    
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=abs(a[i]-b[i]);
    }
    
    return sum;
}

int main()
{
    int n,m;
    cin >> n >> m;
    int a[n], b[m];
    for(int i=0;i<n;i++)    cin>> a[i];
    for(int i=0;i<m;i++)    cin>> b[i];
    int msum=minsums(a,b,n,m);
    cout << msum << endl;
    return 0;
}