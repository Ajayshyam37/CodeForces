#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	string str;
	cin>>str;
	int m=str.length();
	if(m > 10)
	{
	  cout<<str[0]<<(m-2)<<str[m-1]<<endl;
	}else{
	    cout<<str<<endl;
	}
	}
	return 0;
}
