#include <iostream>
using namespace std;

int main() {
    long long int n,m,z;
    cin>>n>>m>>z;
    int c=0;
    long long int a=0;
    for(int i=1;a<z;i++)
    {
        a=a+n;
        if(a % m == 0 && a<=z )
        {
            c++;
           //cout<<i<<endl;
        }
    }
    cout<<c;
}
