#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

void solve() {
    int t;
    cin >> t;
    while(t--)  {
        int n = 10, k;
        int prob[n];
        for(int i = 0; i < n; i++) {
        	cin >> prob[i];
        }
        cin >> k;

        // start deleting problems from max index;
        for(int i = n-1; i >= 0 && k != 0; i--) {
        	if(prob[i] >= k) {
        		prob[i] -= k;
        		k = 0;
        	} else {
        		k -= prob[i];
        		prob[i] = 0;
        	}
        	// cout << "i: " << i << " k:" << k << endl; 
        }

        // check the max index with a positive value
        for(int i = n-1; i >= 0; i--) {
        	if(prob[i] > 0) {
        		cout << i+1 << endl;
        		break;
        	}
        }
    }

}


int main () {
    rapid;
    solve();
}
