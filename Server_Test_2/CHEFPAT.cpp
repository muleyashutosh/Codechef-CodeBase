#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

struct compare {
    bool operator()(pair<int, int> p1, pair<int,int> p2) {
	if(p1.first == p2.first) {
		return p1.second > p2.second;
	} else {
		return p1.first < p2.first;
	}
}
};



void solve() {
    int t;
    cin >> t;
    while(t--)  {
        int n;
        cin >> n;
        priority_queue<pair<int,int>, vector<pair<int,int> >, compare> pq;
        for(int i = 0; i < n ; i++) {
        	int x;
        	cin >> x;
        	pq.push({x, i});
        }
        int ans[n] = {};
        int t = 1;
        while(!pq.empty()) {
      		auto x = pq.top();
      		ans[x.second] = t;
        	pq.pop();
        	t++;
        }
		for(int i = 0 ; i < n; i++) {
			cout << ans[i] << " "; 
		}       
		cout << endl;
    }

}


int main () {
    rapid;
    solve();
}
