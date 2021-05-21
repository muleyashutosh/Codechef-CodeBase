#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

void solve() {
    int t;
    cin >> t;
    while(t--)  {
        float k1, k2, k3, v;
        cin >> k1 >> k2 >> k3 >> v;
        float speed = k1 * k2 * k3 * v;
        float time = round((100 / speed) * 100) / 100;
        // cout << "TIME" << time << endl;
        if(time < (float) 9.58) {
        	cout << "YES" << endl;
        } else {
        	cout << "NO" << endl;
        }
    }

}


int main () {
    rapid;
    solve();
}
