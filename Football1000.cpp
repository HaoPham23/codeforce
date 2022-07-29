#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, goal = 0;
    cin >> n;
    string team, win;
    while(n--) {
        if(goal != 0) {
            cin >> team;
            if(team == win) {
                goal++;
            }
            else {
                goal--;
            }
        }
        else {
            cin >> win;
            goal = 1;
        }
    }
    cout << win;
    return 0;
}