#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int x , y;

    for(int i = 0 ; i < n ; i++){
        cin >> x >> y;
        if((x*2) <= y){
            cout << x << " " << x*2 << endl;
        }
    }

    return 0;
}