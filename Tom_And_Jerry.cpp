#include <iostream>
using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--) {
        long long TS;
        cin >> TS;
        long long JS_count = 0;
        if(TS % 2 != 0) {
                JS_count = (long long) (TS - 1) / 2;
        }
        else {
        
            while(TS % 2 == 0) {
                TS /= 2;
            }
                JS_count = (long long) (TS - 1) / 2;
        }
        
        cout << JS_count << endl;
    }
}
