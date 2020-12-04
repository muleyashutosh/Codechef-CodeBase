#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    ll count = 0;
    ll arr[n][k];
    ll q[n];
    for(int i = 0 ; i < n; i++) {
        for(int j = 0; j < k; j++) {
            cin >> arr[i][j];
        }
        cin >> q[i];
    }
    for(int i = 0; i < n; i++) {
        bool elig = false;
        ll minutes = 0;
        for(int j = 0; j < k; j++) {
            minutes += arr[i][j];
            if(minutes >= m && q[i] <= 10) {
                elig = true;
            }
        }
        if(elig) {
            count++;
        }
    }
    cout << count << endl;
}


int main () {
    rapid;
    solve();
}

