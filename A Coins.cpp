#include <iostream>
using namespace std;

int main() {
	int n,m,i;
	cin>>n>>m;
	for( i=0;m>0;i++)
	{
	    m=m-n;
	}
	cout<<i;
	return 0;
}
