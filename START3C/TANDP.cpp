#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

void solve() {
    int t;
    cin >> t;
    while(t--)  {
        int n, m;
        cin >> n >> m;
        int a, b, x, y;
        cin >> x >> y >> a >> b;
        int thiefMoves = (n - x) + (m - y);
        int policeMoves = 0;
        if((n - a) < (m - b)) {
        	policeMoves = (m - (b + (n - a))) + (n - a);
        } else {
        	policeMoves = (n - (a + (m - b))) + (m - b);
        }
        if(policeMoves < thiefMoves) {
        	cout << "NO" << endl;
        } else {
        	cout << "YES" << endl;
        }
    }

}


int main () {
    rapid;
    solve();
}
