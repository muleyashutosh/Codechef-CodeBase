#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

void solve() {
 int t;
  cin >> t;
  unordered_set <char> mp({'E', 'Q', 'U', 'I', 'N', 'O', 'X'});
  while(t--)  {
    int n, a, b;
    cin >> n >> a >> b;
    ll ac = 0, bc = 0;
    for(int i = 0; i < n ; i++) {
      string s;
      cin >> s;
      if(mp.find(s[0]) != mp.end()) {
        ac += a;
      } else {
        bc += b;
      }
    }

    if(ac == bc) {
      cout << "DRAW" << endl;
    } else if(ac < bc) {
      cout << "ANURADHA" << endl;
    } else {
      cout << "SARTHAK" << endl;
    }
  }
}


int main () {
  rapid;
  solve();
}