#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool EKOSPOJ(int a[], int N, int m, int barrier)
{
    
    if(temp>=m)
        return true;
    return false;
}

int main()
{
    int N,M;
    cin >> N >> M;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin >> arr[i];
        
    }
    sort(arr, arr+N);
    int low=arr[0], high=arr[N-1];
    int mid,res=INT_MAX;
    while(low<=high)
    {
        mid=(low+high)/2;
        int temp=0;
        for(int i=0;i<N;i++)
        {
            if(a[i]-barrier >=0)
                temp+=a[i];
            
        }
        if(EKOSPOJ(arr, N, M, mid))
        {   
             res=mid;
             low=mid+1;
        }    
        else
        {
            high=mid-1;
        }
    }
    
    cout << res << endl;
}
