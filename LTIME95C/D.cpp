#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

void solve() {
  int n;
  cin >> n;
  int arr[n];
  ll sum = 0;
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
    sum = (sum + arr[i] + 1000000007) % (1000000007);
  }

  int q;
  cin >> q;
  for(int i = 0 ; i < q; i++) {
    sum = (2*sum) % (1000000007);
    cout << sum << endl;
  }


}


int main () {
  rapid;
  solve();
}