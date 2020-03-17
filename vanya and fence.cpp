#include <iostream>
using namespace std;

int main() {
    int n,h;
    cin>>n>>h;
    int a[n],count=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int j=1;j<=n;j++)
    {
        if(a[j]>h)
        {
            count=count+2;
        }else{
            count=count+1;
        }
    }
    cout<<count;
}
