// C++ program to find maximum array sum
// after at most k negations.
#include <bits/stdc++.h>

using namespace std;

int sol(int arr[], int n, int k)
{
	int sum=0,i=0;
    sort(arr, arr+n);
    while(arr[i] < 0 && k!=0)
    {
        arr[i]=-arr[i];
        i++;
        k--;
    }
    i=0;
    while(i<n)
    {
        sum+=arr[i];
        i++;
    }


    int minn=*min_element(arr, arr+n);
    if(k%2!=0)
    {
        sum-=(2*minn);
    }
	return sum;
}

// Driver code
int main()
{
	int arr[] = { 2,3,4 };

	int n = sizeof(arr) / sizeof(arr[0]);
	
	cout << sol(arr, n, 5) << endl;

	return 0;
}

// This code is contributed by pratham76
