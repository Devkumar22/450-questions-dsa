#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while(t--)
    {
        int w, h, n;
        cin >> w >> h >> n;
        vector<int> x;
        vector<int> y;

        x.push_back(0);
        y.push_back(0);
        for(int i=0;i<n;i++)
        {
            int q1,q2;
            cin >> q1 >> q2;
            x.push_back(q1);
            y.push_back(q2);
        }
        x.push_back(w+1);
        y.push_back(h+1);
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        int r=0;
        int c=0;
        for(int i=1;i<x.size();i++)
        {
            r=max(x[i]-x[i-1]-1, r);
            c=max(y[i]-y[i-1]-1, c);
        }
        // r=max(w+1-x[n-1]-1, r);
        // c=max(h+1-y[n-1]-1, c);
        cout <<  r*c << endl;
    }
}