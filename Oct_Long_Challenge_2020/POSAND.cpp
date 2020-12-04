#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;



void solve(int n) {
    int arr[n];
    iota(arr, arr + n, 1);
    
    swap(arr[0], arr[1]);
    swap(arr[1], arr[2]);

    for(int i = 3; i < n; i++) {
        if(!(arr[i] & (arr[i]-1)) && arr[i]) {
            swap(arr[i], arr[i+1]);
            i++;
        }
    }
    for(int x: arr) {
        cout << x << " ";
    }

    cout << endl;
}

int main () {
    rapid;
    int t;
    cin >> t;
    while(t--)  {
        int n;
        cin >> n;
        if(n == 1) {
            cout << 1 << endl;
            continue;
        }
        if(!(n & (n-1)) && n) {
            cout << -1 << endl;
            continue;
        }

 		solve(n);   
    }
}