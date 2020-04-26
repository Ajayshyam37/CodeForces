#include <iostream>
using namespace std;

int main() {
    long n;
    cin>>n;
    long long a,b,k,res=0;
    for(int i=1;i<=n;i++){
        cin>>a>>b>>k;
        if(k % 2 == 0){
            res=(a-b) * (k/2);
        }else{
            res= a+(a-b) * (k/2);
        }
        cout<<res<<endl;
    }
	return 0;
}
