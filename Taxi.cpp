#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int s;
    int a[5] = {0,0,0,0,0};
    for(int i = 0; i < n; i++) {
        cin >> s;
        a[s]++;
    }
    int res = a[4]+a[3]+a[2]/2;
    a[2] %= 2;
    a[1] -= a[3];
    if(a[2]) {
        a[1] -= 2;
        res++;
    }
    if(a[1] > 0) {
        res += (a[1]+3)/4;
    } 
    cout << res;
    return 0;
}