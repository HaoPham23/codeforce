#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    int cnt = 0;
    int base = 1;
    int a[5], i = 0;
    for(int j = 0; j < 5; j++)
        a[j] = 0;
    while(n) {
        int digit = n%10;
        n /= 10;
        if(digit) {
            cnt++;
            a[i++] = digit*base;
        }
        base *= 10; 
    }
    cout << cnt << endl;
    for(int j = 0; j < 5; j++) {
        if(a[j]) cout << a[j] << " ";
    }
    cout << endl;
}

int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        solve(n);
    }
    return 0;
}