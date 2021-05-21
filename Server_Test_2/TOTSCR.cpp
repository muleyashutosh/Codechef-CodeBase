#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

void solve() {
    int t;
    cin >> t;
    while(t--)  {
        int n, k;
        cin >> n >> k;
        vector <int> points(k);
        for(int i = 0; i < k; i++) {
        	cin >> points[i];
        }
    
        for(int i = 0; i < n; i++) {
        	string result;
        	cin >> result;
        	ll count = 0;
        	for(int j = 0 ; j < result.size(); j++) {
        		if(result[j] == '1') {
        			count += points[j];
        		}
        	}
        	cout << count << endl;
        }
    }

}


int main () {
    rapid;
    solve();
}
