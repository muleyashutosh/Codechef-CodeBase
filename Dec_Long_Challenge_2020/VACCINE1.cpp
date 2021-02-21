#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

void solve() {
	int d1,v1,d2,v2,p;
	cin >> d1 >> v1 >> d2 >> v2 >> p;
	int vCount = 0;
	bool A = false, B = false;
	int d = 1;
	while(vCount < p) {
		if(d == d1) {
			A = true;
		}
		if(d == d2 ){
			B = true;
		}
		if(A) {
			vCount += v1;
		}
		if(B) {
			vCount += v2;
		}
		if(vCount >= p) {
			break;
		}
		d++;
	}

	cout << d << endl;
}


int main () {
    rapid;
    solve();
}