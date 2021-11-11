class Solution {
public:
    void reverseString(vector<char>& s) {
        if(s.size()==0 || s.size()==1)  return;
        int n=s.size();
        int l=n-1;
        int f=0;
        int temp;
        for(int i=0;i< n/2; i++)
        {
            temp=s[f];
            s[f]=s[l];
            s[l]=temp;
            f++;
            l--;
            
        }
        
    }
};