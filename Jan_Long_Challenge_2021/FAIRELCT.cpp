#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

int sum(vector <int> x) {
	int n = x.size();
	int sum = 0;
	for(int i = 0; i < n; i++) {
		sum += x[i];
	}
	return sum;
}



void solve() {
    int t;
    cin >> t;
    while(t--)  {
        int n, m;
        cin >> n >> m;
        vector <int> a(n), b(m);
        for(int i = 0 ; i < n; i++) {
        	cin >> a[i];
        }
        for(int i = 0 ; i < m; i++) {
        	cin >> b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());

        int count = 0;
        int i = 0;
        bool poss = true;
        while(sum(a) <= sum(b)) {
        	if(i < n && i < m) {
        		swap(a[i], b[i]);
	        	i++;
	        	count++;
        	}
        	else {
        		poss = false;
        		break;
        	}
        	
        }
        if(poss)
        	cout << count << endl;
        else 
        	cout << -1 << endl;
    }

}


int main () {
    rapid;
    solve();
}