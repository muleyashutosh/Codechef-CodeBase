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
    	vector <int> x;
    	for(int i = n; i > 1; i--) {
    		if(k--) {
    			x.emplace_back(i);
    		}
    		else {
    			x.emplace_back(-i);
    		}
    	}
    	for (int i = x.size()-1; i >=0 ; i--)
    	{
    		cout << x[i] << ' ';
    	}
        
    }

}


int main () {
    rapid;
    solve();
}