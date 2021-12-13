#include <iostream>
using namespace std;

string smallestNumber(int S, int D){
        
        if(9*D <S) return "-1";
        
        
        string st="";
        int j=0,sum=0;
        for(int i=D-1;i>=0;i--)
        {
            if(S>9)
            {
                st = "9"+st;
                S-=9;
            }
            else
            {
                if(i==0) st=to_string(S) + st;
                
                else{
                    st = to_string(S-1) + st;
                    i--;
                    while(i>0)
                    {
                        st = "0"+st;
                        i--;
                    }
                    st = "1"+st;
                }
            }
        }
        return st;
        // code here 
    }
int main() {
    int S,D;
    cin >> S >> D;
    string res=smallestNumber(S,D);
    cout<< res;
    return 0;
}
