// #include <bits/stdc++.h>
#include <bits/stdc++.h>
// using namespace std;
// int main() {
//         long long l,r;
//         cin>> l>> r;
//         cout<< "Yes" <<endl;
//         for(long long i=l;i<=r;i+=2)
//         {
//             cout<<i <<' '<<i+1 <<endl;
//         }
//     return 0;
// }
using namespace std;
using ll = long long;

int main () {
   ll l, r;
   cin >> l >> r;
   cout << "YES" << endl; 
   for (ll i = l; i < r + 1; i += 2)
      cout << i << ' ' << i + 1 << endl;
   return 0;
}