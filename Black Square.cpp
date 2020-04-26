#include <iostream>
using namespace std;

int main() {
	int val[5];
	int total=0;
	string s;
	for(int i=1;i<=4;i++)
	{
	    cin>>val[i];
	}
	cin>>s;
	for(int j=0;j<s.size();j++)
	{
	    total=total+val[s[j]-'0'];
	}
	cout<<total;
	return 0;
}
