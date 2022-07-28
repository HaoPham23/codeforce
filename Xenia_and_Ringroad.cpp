#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a, curr = 1;
    long long time = 0;
    for(int i = 0; i < m; i++) {
        cin >> a;
        if(curr <= a) {
            time += a-curr;
            curr = a;
        }
        else {
            time += n-curr+a;
            curr = a;
        }
    }
    cout << time;
    return 0;
}