#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

void solve() {
    int t;
    cin >> t;
    while(t--)  {
        string s;
        cin >> s;
        ll count = 0;
        char prev = '#';
        for(char x: s) {
        	if(prev != '1' && x == '1') {
        		count++;
        	}
        	prev = x;
        }
        cout << count << endl;
    }

}


int main () {
    rapid;
    solve();
}
