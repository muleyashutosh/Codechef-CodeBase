#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

void solve(int n, int x, int p, int k, int a[]) {
    k--; p--;
    sort(a, a + n);
    if(a[p] == x) {
        cout << 0 << endl;
    }
    else if(x > a[p]) {
        if(p < k) {
            cout << -1 << endl;
        }
        else {
            int count = 0;
            while(p < n) {
                if(a[p] >= x)
                    break;
                p++;
                count++;
            }
            cout << count << endl;
        }
    }
    else {
        if(k < p) {
            cout << -1;
        }
        else {
            int count = 0;
            while(p >= 0) {
                if(a[p] <= x)
                    break;
                p--;
                count++;
            }
            cout << count << endl;
        }
    }
}


int main () {
    rapid;
    int t;
    cin >> t;
    while(t--)  {
        int n, x, p, k;
        cin >> n >> x >> p >> k;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        } 
 		solve(n, x, p, k, arr);   
    }
}