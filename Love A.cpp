#include <iostream>
using namespace std;

int main(){
   string str; 
    getline(cin, str); 
    string s="a";
    int x=0;
    int n=str.size();
    for(int i=0;i<str.size();i++)
    {
        if(str[i] == s[0])
        {
            x++;
        }
    }
    x=(x*2)-1;
    cout<<min(n,x);
}
