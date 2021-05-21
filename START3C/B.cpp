#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

void solve() {
    int t;
    cin >> t;
    while(t--)  {
        int m, n, x, y;
        cin >> m >> n >> x >> y;
        for(int i = 0; i < m; i++) {
	        string s;
	        cin >> s;
	        int f = 0, u = 0, p = 0;
	        for(int i = 0 ; i < n; i++) {
	        	if(s[i] == 'U')
	        		u++;
	        	else if(s[i] == 'P')
	        		p++;
	        	else 
	        		f++;
	        }
	        // cout << f << " " << p << " " << u << endl;
	        if((f >= x) or (f == (x-1) and p >= y)) {
	        	cout << "1";
	        } else {
	        	cout << "0";
	        }
        }
        cout << endl;
    }

}


int main () {
    rapid;
    solve();
}
