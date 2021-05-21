#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

void solve() {
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        int extra = n % 4;
        ll levels = ceil((double) n / 4);
        ll ans = 44 * (levels-1);
        switch(extra) {
        	case 0:
        		ans += 60;
        		break;
        	case 1:
        		if(n < 4)
        			ans += 20;
        		else
        			ans += 32;
	        	break;
	        case 2:
	        	if(n < 4)
	        		ans += 36;
	        	else
	        		ans += 44;
	        	break;
	        case 3:
	        	if(n < 4)
	        		ans += 51;
        		else
	        		ans += 55;
	        	break;
        }
        cout << ans << endl;
    }
}


int main () {
    rapid;
    solve();
}
