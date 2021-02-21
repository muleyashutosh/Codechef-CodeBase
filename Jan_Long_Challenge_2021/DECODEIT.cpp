#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

void solve() {
    int t;
    cin >> t;
    while(t--)  {
    	int n;
    	cin >> n;
        string s;
        cin >> s;
        string alph = "abcdefghijklmnop";

        for(int i = 0; i < n; i += 4) {
        	int l = 0, r = 15;
        	for(int j = i; j < i+4; j++) {
        		if(s[j] == '0') {
        			r = l + ((r-l) / 2);
        		}
        		else {
        			l += ((r-l+1) / 2);
        			// cout 
        		}
        	}
    		cout << alph[l];
        }
        cout << endl;
    }

}


int main () {
    rapid;
    solve();
}