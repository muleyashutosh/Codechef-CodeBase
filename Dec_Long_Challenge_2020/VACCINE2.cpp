#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

void solve() {
    int t;
    cin >> t;
    while(t--) {
    	int n, d;
    	cin >> n >> d;
    	int rcount = 0;
    	for (int i = 0; i < n; i++) {
    		int x;
    		cin >> x;
    		if(x >= 80 or x <= 9)
    			rcount++;
    	}
    	int ans = ceil((double) rcount / d) + ceil((double) (n - rcount) / d);
    	cout << ans << endl;
        
    }

}


int main () {
    rapid;
    solve();
}
