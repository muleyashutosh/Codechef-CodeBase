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
        int n, k, x, y;
        cin >> n >> k >> x >> y;
        // k = k % n;
        if(k == 0) {
            cout << "NO" << endl;
            continue;
        }
        bool meet = false;
        unordered_set <int> st;
        while(true) {
            x = (x + k) % n;
            if(x == y) {
                meet = true;
                break;
            }
            if(st.find(x) != st.end()) {
                break;
            }
            st.insert(x);
        }
        if(meet) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}