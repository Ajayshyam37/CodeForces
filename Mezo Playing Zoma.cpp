#include <iostream>
using namespace std;
int main() {
	int n,res=1,count1=0,count2=0;
	cin>>n;
	string s;
	cin>>s;
	for(int i=0;i<n;i++)
	{
	    if(s[i] == 'L'){
	        count1++;
	    }
	    if(s[i] == 'R'){
	        count2++;
	    }
	}
	res=res + count1 + count2;
	cout<<res;
	return 0;
}
