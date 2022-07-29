#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    long long a, b, x, y;
    cin >> t;
    while(t--) {
        cin >> x >> y >> a >> b;
        if(x < y) swap(x,y);
        int z = x-y;
        cout << min((x+y)*a, z*a+y*b) << endl;
    }
    return 0;
}