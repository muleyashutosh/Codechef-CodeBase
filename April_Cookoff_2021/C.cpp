#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

void solve() {
    int t;
    cin >> t;
    while(t--)  {
        int n, r;
        cin >> n >> r;
        int arr[n], b[n];
        for(int i = 0 ; i < n ; i++) {
        	cin >> arr[i];
        }
        for(int i = 0 ; i < n ; i++) {
        	cin >> b[i];
        }

        ll tension = b[0];
        ll maxTension = tension;
        for(int i = 1 ; i < n; i++) {
        	tension = tension - (r * (arr[i] - arr[i-1]));
        	if(tension < 0) tension = 0;
        	tension += b[i];
        	maxTension = max(maxTension, tension);
        }
        cout << maxTension << endl;
    }

}


int main () {
    rapid;
    solve();
}
