#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

void solve() {
    int t;
    cin >> t;
    while(t--)  {
        int arr[3], min[3], Tmin;
        for(int i = 0; i < 3; i++) {
        	cin >> min[i];
        }
        cin >> Tmin;
        for(int i = 0; i < 3; i++) {
        	cin >> arr[i];
        }
        bool pass = true;
        for(int i = 0 ; i < 3; i++) {
        	if(arr[i] < min[i]) {
    			pass = false;
    			break;
        	}
        }

        if(pass) {
        	if((arr[0] + arr[1] + arr[2]) < Tmin) {
        		cout << "NO" << endl;
        	}
        	else {
        		cout << "YES" << endl;
        	}
        } else {
        	cout << "NO" << endl;
        }
    }

}


int main () {
    rapid;
    solve();
}
