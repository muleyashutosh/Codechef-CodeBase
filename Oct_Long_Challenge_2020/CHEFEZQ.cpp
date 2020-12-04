#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

int main () {
    rapid;
    int t;
    cin >> t;
    while(t--)  {
        int n, k;
        cin >> n >> k;
        vector <ll> ar(n);
        for(int i = 0 ; i < n; i++) {
            cin >> ar[i];
        }
        // for(ll x: ar) {
        //     cout << x << " " ;
        // }
        bool found = false;
        ll count = 0;
        for(ll i = 0 ; i < n-1; i++) {
            count++;
            if(ar[i] < k) {
                found = true;
                break;
            }
            else {
                ll diff = ar[i] - k;
                ar[i + 1] += diff;
            }
        }
        if(found) {
            cout << count << endl;
        }
        else {
            cout << count + (ar[n-1] / k) + 1 << endl;
        }
        
        
    }
}