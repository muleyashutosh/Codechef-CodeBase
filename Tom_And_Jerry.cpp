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
            for(long long i = 2; i <= TS ; i =(long long) i + 2) {
                JS_count++;
            }
        }
        else {
            while(TS % 2 == 0) {
                TS /= 2;
            }
            
            for(long long i = 2; i <= TS ; i =(long long) i + 2) {
                JS_count++;
            }
            
        }
        
        cout << JS_count << endl;
    }
}
