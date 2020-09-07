#include <bits/stdc++.h>
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;



int main() {
    rapid;
	int t;
	cin >> t;
	while(t--) {
    	int n;
    	cin >> n;
    	int a[n + 1][n + 1] = {};
    	for(int i = 1 ; i <= n; i++) {
    	    for(int j = 1; j <= n; j++) {
    	        cin >> a[i][j];
    	    }
    	}
        int L = n;
        int count = 0;
        while(L > 1) {
            if(a[1][L] != L ) {
                for(int j = 2; j <= L; j++) {
                    swap(a[1][j],a[j][1]);
                }
                count++;
            }
            L--;
        }
        cout << count << endl;
	}
	
	return 0;
}