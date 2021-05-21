#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define MOD 1000000007
#define for0(n) for(int i = 0 ; i < n; i++)
#define sz(x) x.size()
#define pb push_back
using namespace std;

void solve() {
  int t;
  cin >> t;
  while(t--) {
    int x, a, b;
    cin >> x >> a >> b;
    ll ans = (((100 - x) * b) + a) * 10;
    cout << ans << endl;
  }
}

int main () {
  rapid;
  solve();   
}