#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n,m,temp=0;
    cin>>n>>m;
    int count1=0,count2=0;
    if(n == m)
    {
        count1=n;
        count2=0;
    }else{
        count1=min(n,m);
        temp=max(n,m);
        count2=abs((temp - count1)/2);
    }
    
    cout<<count1<<" "<<count2;
}
