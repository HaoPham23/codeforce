#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a, b, c;
    int sumA = 0, sumB = 0, sumC = 0;
    for(int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        sumA += a;
        sumB += b;
        sumC += c;
    }
    if(!(sumA || sumB || sumC)) cout << "YES";
    else cout << "NO";
    return 0;
}