#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main() {
	int n,count=0;
	cin>>n;
	int a;
	vector<int> v ;
	for(int i=0;i<n;i++){
	    cin>>a;
	    v.push_back(a);
	}
	sort(v.begin(), v.end()); 
	for(int i=0;i<n;i++)
	{
	   int diff=abs(v[i]-v[i+1]);
	   count=count+diff;
	   i=i+1;
	}
	cout<<count;
	return 0;
}
