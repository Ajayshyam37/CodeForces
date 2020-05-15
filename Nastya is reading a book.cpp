#include <bits/stdc++.h>
using namespace std;
const int N = 101;
int n;
pair <int, int> a[N];
int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i].first >> a[i].second;
    int p;
    cin >> p;
    for (int i = n - 1; i >= 0; --i) {
        if (a[i].first <= p) {
            cout << n - i << '\n';
            exit(0);
        }   
    }   
}