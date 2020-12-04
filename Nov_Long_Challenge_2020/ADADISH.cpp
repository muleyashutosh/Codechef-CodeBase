#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

void solve() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n, greater<int>());
        if(n == 1 or n == 2) {
            cout << a[0] << endl;
        }
        else if(n == 3 ) {
            cout << max(a[0],a[1] + a[2]) << endl;
        }
        else {
           a[1] += a[2];
           if(a[0] <= a[1]) {
               a[0] += a[3];
               cout << max(a[0],a[1]) << endl;
           } 
           else {
               a[1] += a[3];
               cout << max(a[0],a[1]) << endl;
           }
            
        }
        
    }

}


int main () {
    rapid;
    solve();
}