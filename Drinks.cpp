#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n,temp;
    cin>>n;
    double sum=0;
    for(int i=1;i<=n;i++)
    {
        cin>>temp;
        sum=sum+temp;
    }
    cout<<setprecision(12)<<sum/n;
}
