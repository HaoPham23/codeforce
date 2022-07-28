#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int i = 1;
    while(true) {
        n--;
        if(i%m == 0) n++;
        if(n == 0) {
            cout << i;
            break;  
        }
        i++;
    }
    return 0;
}