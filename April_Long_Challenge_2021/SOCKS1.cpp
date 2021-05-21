#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

void solve() {
    int a, b, c ;
    cin >> a >> b  >> c;
    if(a == b  or b == c or a == c) {
    	cout << "YES";
    } else {
    	cout << "NO";
    }

}


int main () {
    rapid;
    solve();
}
