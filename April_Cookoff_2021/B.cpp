#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

void solve() {
    int t;
    cin >> t;
    while(t--)  {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for(int i = 0 ; i < n; i++) {
        	cin >> arr[i];
        }
        unordered_map <int, int> chocs;
        int count = 0;
        for(int i = 0 ; i < n ; i++) {
        	chocs[arr[i]]++;
        }
     	
     	for(auto z = chocs.begin(); z != chocs.end(); z++) {
     		int cnt = z->second - 1;
     		if(!x) break;
     		if(cnt >= 1) {
     			if(cnt <= x) {
     				z->second = 1;
     				x -= cnt;
     			} else {
     				z->second -= x;
     				x = 0;
     			}
     		}
     	}
     	// for(auto z: chocs) {
     	// 	cout << "(" << z.first << ", " << z.second << "), ";
     	// }
     	if(x) {
     		cout << chocs.size() - x << endl;
     	} else {
     		cout << chocs.size() << endl;
     	}
    }

}


int main () {
    rapid;
    solve();
}
