#include <bits/stdc++.h>
using namespace std;

int main() {
    string ser,s;
    int check=0;
    cin>>ser;
    for (int i = 0; i < 5; ++i) {
		cin >> s;
		if (ser[0] == s[0] || ser[1] == s[1])
            check = 1;
	}
	
	if(check == 1)
	{
	    cout<<"YES";
	}else{
	    cout<<"NO";
	}
    
}

