# include <bits/stdc++.h>
using namespace std;

bool areRotations(string str1, string str2)
{
if (str1.length() != str2.length())
		return false;

string temp = str1 + str1;
int l=str1.length();
for(int i=0;i<=l;i++)
{
    string t=temp.substr(i,l);
    if(t==str2) return true;
}
return false;
}

int main()
{
string str1 = "AACD", str2 = "ACDA";
if (areRotations(str1, str2))
	printf("Strings are rotations of each other");
else
	printf("Strings are not rotations of each other");
return 0;
}
