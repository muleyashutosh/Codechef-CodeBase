#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    long long n;
	    cin >> n;
	    long long sum = 0;
	    int d = 5;
	    while(d <= n) {
	        sum += (long long) (n / d);
	        d *= 5;
	    }
	    cout << sum << endl;
	}
	return 0;
}
