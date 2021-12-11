#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>> t;
    int n;
       cin>> n;
   while(t--)
   {
       int a[n];
       for(int i=0;i<n;i++) cin >> a[i];
       vector<pair<int, int>> pos;
       vector<pair< int, int>> neg;
       for(int i=0;i<n;i++)
       {
        //    int element;
        //    cin >> element;

           if(a[i]>0)    pos.push_back({a[i], i});
           else         neg.push_back({a[i], i});
            
       }
      

    long long int j=0 , work=0,i=0;
       while(i<pos.size() && j<neg.size())
       {
               int mi = min(pos[i].first , -neg[j].first);
               pos[i].first -=mi;
               neg[j].first +=mi;

               work+=abs(pos[i].second - neg[j].second)*mi;
               if(pos[i].first == 0) i++;
               if(neg[j].first == 0) j++;

        }

       cout << work << endl;

        cin>> n;
       if(n==0) break;

   }
}
// better approacho(nlogn)
// vector<pair<long long int,long long int>> vp;
//        for(long long int i=0;i<n;i++)
//        {
//            int element;
//            cin >> element;
//            vp.push_back({element, i});
//        }
//        sort(vp.begin(), vp.end());

//        long long int j=n-1 , work=0,i=0;
//        while(i<j)
//        {
//            if(vp[i].first < vp[j].first)
//            {
//                int mi = min(abs(vp[i].first) , vp[j].first);
//                vp[i].first +=mi;
//                vp[j].first -=mi;

//                work+=abs(vp[i].second - vp[j].second)*mi;
//                if(vp[i].first == 0) i++;
//                if(vp[j].first == 0) j--;

//            }

//        }