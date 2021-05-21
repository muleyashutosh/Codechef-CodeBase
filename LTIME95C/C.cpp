#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

void solve() {
int t;
  cin >> t;
  while(t--)  {
    int l;
    string s;
    cin >> l >> s;
    int i = 0;
    int good = 0, bad = 0;
    bool POSS = false;
    while(i < l) {
      if(s[i] == '1') good++;
      else bad++;

      if(good >= (0.5 * (i+1))) {
        POSS = true;
        break;
      }
      i++;
    }
    if(POSS) {
      cout <<"YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}


int main () {
  rapid;
  solve();
}