#include <bits/stdc++.h>
using namespace std;

int solve(int n) {
    if(n <= 2) return 0;
    if(n%2 == 0) return n/2-1;
    else return n/2;
}

int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}