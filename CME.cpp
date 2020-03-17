#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,n;
    cin>>x;
    for(int i=0;i<x;i++)
    {
    cin>>n;
     if(n%2==0 && n>2)
    {
        cout<<"0"<<endl;
    } else if(n%2==0){
        cout<<"2"<<endl;
    }else{
        cout<<"1"<<endl;
    }

}
}

