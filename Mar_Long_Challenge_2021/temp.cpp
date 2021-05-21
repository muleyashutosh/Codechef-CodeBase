#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

int dig_sum(int n) {
	int sum = 0;
	while(n) {
		sum += (n % 10);
		n /= 10;
	}
	return sum;
}

void solve() {
    int a;
    cin >> a;
    cout << dig_sum(a);
}

int main () {
    rapid;
    solve();
}
