#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

void solve() {
    int n, h, x;
    cin >> n >> h >> x;
    bool possible = false;
    for(int i = 0 ; i < n; i++) {
    	int z;
    	cin >> z;
    	if((x + z) >= h) {
    		possible = true;
    		break;
    	}
    }
    if(possible) {
    	cout << "YES" << endl;
    } else {
    	cout << "NO" << endl;
    }

}


int main () {
    rapid;
    solve();
}
