#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "WUBS";
    cin >> s;
    bool flag = true;
    for(int i = 0; s[i]; i++) {
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
            i += 2;
            if(!flag) {
                cout << " ";
                flag = true;
            }
        }
        else {
            flag = false;
            cout << s[i];
        }
    }
    return 0;
}