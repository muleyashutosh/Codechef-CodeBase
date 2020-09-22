#include <iostream>
#include <vector>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        for(int i = 0; i < n; i++) {
            int x,y;
            cin >> x >> y;
        }
        int sum = n;
        if (n > 5) {
            while(n > 5) {
                n = n >> 1;
                sum += n;
            }
        }
        cout << sum << endl;

    }
}