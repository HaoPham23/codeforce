#include <bits/stdc++.h>
using namespace std;

void generate(int n, int t) {
    if(n == 1) {
        if(t == 10)
            cout << -1;
        else
            cout << t;
    }
    else {
        if(t == 10) {
            for(int i = 1; i < n; i++) {
                cout << 1;
            }
            cout << 0;
        }
        else {
            for(int i = 0; i < n; i++) {
                cout << t;
            }
        }
    }
}

int main() {
    int n, t;
    cin >> n >> t;
    generate(n, t);
    return 0;
}