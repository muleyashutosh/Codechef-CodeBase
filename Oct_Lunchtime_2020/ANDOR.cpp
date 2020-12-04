#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

void solve() {
    int t;
    cin >> t;
    while(t--) {
        ll x;
        cin >> x;
        cout << (x-1 >> 1) << " " << (x - (x-1 >> 1)) << endl;
    }

}


int main () {
    rapid;
    solve();
}