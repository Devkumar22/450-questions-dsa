#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int m, n;
        cin>>m;
        cin>>n;
        m--;
        n--;
        int arrx[m];
        for(int i=0;i<m;i++) cin>>arrx[i]; 
        int arry[n];
        for(int i=0;i<n;i++) cin>>arry[i];

        sort(arrx, arrx+m, greater<int>());
        sort(arry, arry+n, greater<int>());

        int x=0,y=0;
        int cost=0,vert=1,hrz=1;
        while(x<m && y<n)
        {
            if(arrx[x] > arry[y])
            {
                cost+= arrx[x]*vert;
                hrz++;
                x++;
            }
            else{
                cost+=arry[y]*hrz;
                vert++;
                y++;
            }
        }
        while(x<m){
            cost+= arrx[x]*vert;
            x++;
        }
        while(y<n){
            cost+= arry[y];
        }
   cout<< cost << endl;
    }




   
}
