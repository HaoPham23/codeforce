#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        long long m = 1;
        for(int i = 0; i < 50; i++) {
            m = 2*m+1;
            if(n%m == 0) {
            cout << n/m << endl;
            break;
            }
        }
    }
    return 0;
}