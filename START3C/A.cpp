#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

void solve() {
    int t;
    cin >> t;
    while(t--)  {
        int x, y, a, b, d;
        cin >> x >> y >> a >> b >> d;
        float days = min((float)x / a, (float)y / b);
        if(days < d) {
        	cout << "NO" << endl;
        } else {
        	cout <<"YES" << endl;
        }
    }

}


int main () {
    rapid;
    solve();
}
