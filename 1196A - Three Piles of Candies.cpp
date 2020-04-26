#include <iostream>
using namespace std;

int main() {
	long int val[4];
	int n;
	cin>>n;
	for(int j=0;j<n;j++)
	{
	    long int total=0,res=0;
	for(int i=1;i<=3;i++)
	{   
	    cin>>val[i];
	    total=total+val[i];
        res=total;
	}
	cout<<(res/2)<<endl;
	}
	return 0;
}
