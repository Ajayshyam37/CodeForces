#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int res=0;
    while(n!=0)
    {
    if(n>=100)
    {
        n=n-100;
        res++;
    }  else if(n>=20){
            n-=20;
            res++;
        }
        else if(n>=10){
            n-=10;
            res++;
        }
        else if(n>=5){
            n-=5;
            res++;
        }
        else if(n>=1){
            n-=1;
            res++;
        }
    }
   cout<<res; 
}

