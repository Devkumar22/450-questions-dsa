#include <bits/stdc++.h>
using namespace std;

int subset(int a[], int n)
{
    sort(a, a+n);
    int res=0,count=0,total=0;
    for(int i=0;i<n;i++)
        total+=a[i];
    
    for(int i=n-1;i>=0;i--)
    {    
        res+=a[i];
        count++;
        total-=a[i];
        if(total<res)
            return count;
    }
    return n;


}
int main() {
    int n;
    cin>> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int res = subset(a, n);
    cout<< res<< endl;
}
