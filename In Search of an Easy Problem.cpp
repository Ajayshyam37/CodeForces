#include <iostream>
using namespace std;

int main() {
	int a,count=0;
	cin>>a;
	int arr[a];
	for(int i=0;i<a;i++)
	{
	    cin>>arr[i];
	}
	for(int j=0;j<a;j++)
	{
	    if(arr[j]==1)
	    {
	        count++;
	    }
	}
	if(count>0)
	{
	    cout<<"HARD";
	}else{
    cout<<"EASY";
}
    
	return 0;
}
