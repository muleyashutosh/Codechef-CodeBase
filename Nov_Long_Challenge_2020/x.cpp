#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    ll maxWeight = 0;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for(int i = 1; i < n; i+=4) {
        maxWeight += arr[i];
    }
    cout << maxWeight;
}


int main () {
    rapid;
    solve();
}

