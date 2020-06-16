#include <iostream>
using namespace std;

int reverse(int n ) {
    int reverse = 0;
    
    while ( n > 0) {
        int r = n % 10;
        reverse = reverse * 10 +r;
        n /= 10;
    }
    return reverse;
}



int main() {
	// your code goes here
	int n;
	cin >> n;
	while( n-- ) {
	    int x;
	    cin >> x;
	    cout << reverse(x) << endl;
	}
	
	return 0;
}
