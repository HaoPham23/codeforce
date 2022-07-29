#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    map<string, string> M;
    string x, y;
    for(int i = 0; i < m; i++) {
        cin >> x >> y;
        M[x] = y;
    }
    for(int i = 0; i < n; i++) {
        cin >> x;
        y = M[x];
        if(y.size() < x.size())
            cout << y << " ";
        else
            cout << x << " ";
    }
    return 0;
}