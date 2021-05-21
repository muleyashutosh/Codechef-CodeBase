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
        unordered_map<char,int> mp;
        for(char x: s) {
        	mp[x]++;
        }
        int odd = 0, even = 0, one = 0;

        for(auto x: mp) {
        	if((x.second % 2 == 0)) {
        		even++;
        	} else if(x.second != 1) {
        		odd++;
        	} else {
        		one++;
        	}
        }
        if(odd <= mp.size() && one <= even) {
        	cout <<"YES" << endl;
        } else {
        	cout << "NO" << endl;
        }


    }

}


int main () {
    rapid;
    solve();
}
