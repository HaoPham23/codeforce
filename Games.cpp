#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[30][2];
    int res = 0;
    for(int i = 0; i < n; i++)
        cin >> a[i][0] >> a[i][1];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i != j) {
                if(a[i][0] == a[j][1])
                    res++;
            }
        }
    }
    cout << res;
    return 0;
}