#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

void solve() {
    int t;
    cin >> t;
    while(t--)  {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int cont = 0;
        char prev = '#';
        bool strong = false;
        for(int i = 0 ; i < n; i++) {
        	if(s[i] != prev) {
        		cont = 0;
        	}
        	if(s[i] == '*') {
        		cont++;
        	}
        	if(cont >= k) {
        		strong = true;
        		break;
        	}
        	prev = s[i];
        }
        if(strong) {
        	cout << "YES" << endl;
        } else {
        	cout << "NO" << endl;
        }
    }

}


int main () {
    rapid;
    solve();
}
