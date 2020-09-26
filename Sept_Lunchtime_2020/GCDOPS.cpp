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
 		int n;
        cin >> n;
        bool ans = true;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if((i + 1) % x != 0) {
                ans = false;
            }
        }
        if(ans) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}