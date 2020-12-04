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
        int arr[n];
        for(int i = 0 ; i < n; i++) {
            cin >> arr[i];
        }
        
        for(int i = 2 ; i < n; i++) {
            arr[i] = arr[i] + arr[i-2];
        }
        
        cout << max(arr[n-1], arr[n-2]) << endl;
    }
}


int main() { 
    solve();
}