#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    int n, a, b;
    string c = "abcdefghijklmnopqrstuvwxyz";
    cin >> t;
    while(t--) {
        cin >> n >> a >> b;
        string s = "";
        for(int i = 0; i < b; i++) {
            s += c[i];
        }
        int i = 0;
        while(n--) {
            cout << s[i++];
            if(i == b)
                i = 0;
        }
        cout << endl;
    }
    return 0;
}