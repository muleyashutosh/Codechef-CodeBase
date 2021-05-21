#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

void solve() {
    int t;
    cin >> t;
    while(t--)  {
        int n,k;
        cin >> n >> k;
        if(k == 0) {
        	cout << n << endl;
        } else {
        	cout << n % k << endl;
        }
    }

}


int main () {
    rapid;
    solve();
}
