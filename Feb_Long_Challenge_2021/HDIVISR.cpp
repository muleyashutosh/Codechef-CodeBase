#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

void solve() {

    int n;
    cin >> n;
    for(int i= 10; i>0 ; i--) {
    	if(!(n % i)) {
    		cout << i << endl;
    		break;
    	}
    }

}


int main () {
    rapid;
    solve();
}
