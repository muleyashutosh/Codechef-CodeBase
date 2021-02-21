#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

void solve() {
    int t;
    cin >> t;
    while(t--)  {
        int n, k, d;
        cin >> n >> k >> d;
        ll probs = 0;
        for (int i = 0; i < n; ++i) {
        	int x;
        	cin >> x;
        	probs += x;
        }
        ll ans = probs / k;
        if(ans <= d) {
        	cout << ans << endl;
        }
        else {
        	cout << d << endl;
        }

    }

}


int main () {
    rapid;
    solve();
}