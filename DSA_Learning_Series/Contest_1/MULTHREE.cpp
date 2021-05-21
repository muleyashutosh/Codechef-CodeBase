#include <iostream>
using namespace std;

void solve(long long k, int d0, int d1) {
    int sum = d0 + d1;
    int x = sum;
    for(long long i = 2; i < k; i++) {
        sum += (sum % 10);
    } 
    if(sum % 3 == 0) {
        cout << "YES";
    }
    else
        cout << "NO";

}


int main () {
    int t;
    cin >> t;
    while(t--) {
        long long k,d0,d1;
        cin >> k >> d0 >> d1;
        solve(k,d0,d1);
    }
}