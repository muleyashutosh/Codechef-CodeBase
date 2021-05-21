#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

void solve() {
  int t;
  cin >> t;
  while(t--) {
    int n, w, wr;
    cin >> n >> w >> wr;
    int weights[n];
    for(int i = 0; i < n ; i++) {
      cin >> weights[i];
    }
    bool possible = false;
    if(wr >= w) {
      possible = true;
    }
    if(!possible) {
      unordered_map <int,int> mp;
      for(int i= 0 ; i < n; i++) {
        mp[weights[i]]++;
      }
      int maxCount = -1;
      int max = 0;
      for(auto x: mp) {
        if(maxCount < x.second) {
          maxCount = x.second;
          max = x.first;
        } else if(maxCount == x.second) {
          if(x.first > max) {
            maxCount = x.second;
            max = x.first;
          }
        }
      }
      if(maxCount == 1) {
        possible = false;
      }
      if(maxCount & 1) {
        maxCount--;
      }

      ll sum = wr + (max * maxCount);
      if(sum >= w) {
        possible = true;
      }
    }

    if(possible) {
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