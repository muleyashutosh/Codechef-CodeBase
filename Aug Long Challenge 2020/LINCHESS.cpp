#include <iostream>
using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--) {
        int n,k;
        cin >> n >> k;
        bool possible = false;
        int min = 999999999;
        int player;
        for(int i = 0; i < n; i++) {
            int p;
            cin >> p;
            if ( p > k )
                continue;
            if (k % p == 0 && (k / p) < min) {
                possible = true;
                min = k / p;
                player = p;
            }
        }
        if(!possible) {
            cout << -1 << endl;
        }
        else {
            cout << player << endl;
        }
    }
}