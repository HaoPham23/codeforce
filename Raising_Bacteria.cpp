#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    int cnt = 0;
    while(n) {
        if(n%2 == 1)
            cnt++;
        n /= 2;
    }
    cout << cnt;
    return 0;
}