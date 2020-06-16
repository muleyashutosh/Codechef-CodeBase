#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n, k;
	    cin >> n >> k;
	    int red = 0;
	    for(int i = 0; i < n; i++) {
	        int x;
	        cin >> x;
	        if(x > k) {
	            red += x - k;
	        }
	    }
	    cout << red << endl;
	}
	return 0;
}
