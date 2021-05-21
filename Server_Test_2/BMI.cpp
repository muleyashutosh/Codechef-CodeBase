#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

void solve() {
    int t;
    cin >> t;
    while(t--)  {
        int m, h;
        cin >> m >> h;
        ll bmi = m / (h * h);
        if(bmi <= 18) {
        	cout << 1 << endl;
        } else if( bmi <= 24) {
        	cout << 2 << endl;
        } else if( bmi <= 29) {
        	cout << 3 << endl;
        } else {
        	cout << 4 << endl;
        }
    }

}


int main () {
    rapid;
    solve();
}
