#include <iostream>
using namespace std;

int main() {
	int n,c,f;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    c=0;
	    for(int j=0;j<3;j++)
	    {
	    int a=0;
	    cin>>a;
    	if(a == 1)
	    {
	    c++;
	    //cout<<"c"<<c<<endl;
    	}
	    
	    }
	    if(c >=2 )
	    {
    	    f++;
    	    //cout<<"f"<<f<<endl;
    	}
	}
	cout<<f;
	return 0;
}
