# include <bits/stdc++.h>
using namespace std;

bool areShuffled(string str1, string str2, string res)
{
    int k=0,i=0,j=0;
    while(k!=res.length())
    {
        if(i<str1.length() and str1[i]==res[k])
            i++;
        else if(j<str2.length() and str2[j]==res[k])
            j++;
        else
        {
            return false;
        }
        k++;
    }
    if(i<str1.length() || j<str2.length())    
        return false;

    return true;
}

int main()
{
string str1 = "CDEG", str2 = "AFBH", res="ABDEFCGH";
if(str1.length() + str2.length() != res.length())
    cout<<"not shuffle"<<endl;

sort(str1.begin(), str1.end());
sort(str2.begin(), str2.end());
sort(res.begin(), res.end());

if (areShuffled(str1, str2, res))
	printf("Strings are shuffled of each other");
else
	printf("Strings are not shuffled of each other");
return 0;
}
