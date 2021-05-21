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
    int n, x, k;
    cin >> n >> x >> k;
    bool poss = false;
    for(int i = 0; i <= n+1; i += k) {
      // cout << i << " ";
      if(i == x) {
        poss = true;
        break;
      }
    }
    // cout << endl;
    if(!poss) {
      for(int i = n+1; i >=0; i -= k) {
        // cout << i << " ";
        if(i == x) {
          poss = true;
          break;
        }
      }
    }
    // cout << endl;
    if(poss) {
      cout << "YES" << endl;
    }else {
      cout << "NO" << endl;
    }
  }
}

int main () {
  rapid;
  solve();   
}