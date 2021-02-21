#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

void solve() {
	int t;
	cin >> t;
	while(t--) {
		ll a, b;
		cin >> a >> b;
		cout << (ll) ceil((long double)a * b / 2) << endl;
	}

}


int main () {
    rapid;
    solve();
}