#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    int b=((n-1)/2);
	vector<int> myvector;
	for(int i=0;i<n;i++)
	{
	    int a;
	    cin>>a;
	    myvector.push_back(a);
	}
	sort(myvector.begin(), myvector.end());
	cout << myvector[b];
	
}
