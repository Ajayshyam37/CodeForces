#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main() {
	long long int n,count=0,max;
	cin>>n;
	int arr[1005];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	    if(arr[i]%2==0)
	    {
	        --arr[i];
	    }
	}
	for(int i=0;i<n;i++)
	{
	    cout<<arr[i]<<" ";
	}
	return 0;
}
