#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

void solve() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        
        int mins = __INT_MAX__;
        for(int i = 0; i <= (n - k); i++) {
            int diff = arr[i+k-1] - arr[i];
            if(diff < mins) {
                mins = diff;
            }

        }
        cout << mins << endl;
    }
}


int main () {
    rapid;
    solve();
}