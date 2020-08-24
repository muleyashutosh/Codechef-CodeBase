#include <iostream>
using namespace std;

int solve(int h, int p) {
    while(h > 0 && p > 0) {
        h -= p;
        p >>= 1;
        if(p >= h) {
            return 1;
        }
        if( p <= 0 && h > p) {
            return 0;
        }
    }
    return -1;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        int h, p;
        cin >> h >> p;
        if (p >= h)
            cout << 1 << endl;
        else
            cout << solve(h, p) << endl;
    }
}