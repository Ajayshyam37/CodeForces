#include <iostream>
using namespace std;

int main() {
	int a,b,count=0;
	cin>>a>>b;
	for(a;a<=b;count++)
	{
	    a=a*3;
	    b=b*2;
	}
	cout<<count;
	return 0;
}

