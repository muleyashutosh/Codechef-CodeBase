#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

int main() {
    rapid;
    int t;
    cin >> t;
    while(t--) {
        int l, r;
        cin >> l >> r;
        if(r < 2 * l) {
            cout << r << endl;
        }
        else {
            cout << -1 << endl;
        }
         
    }
    return 0;
}
