#include <iostream>
using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string goals;
        cin >> goals;
        int awin = 0, bwin = 0, alose = 0, blose = 0;
        int i;
        for( i = 0 ; i < goals.length(); i++) {
           if( ((awin > bwin) and (blose > (n - awin))) or ((bwin > awin) and (alose > (n - bwin))) ) 
                break;

            if((i & 1) != 0) {
                if(goals[i] == '1') {
                    bwin++;
                }
                else {
                    blose++;
                }
            }
            else {
                if(goals[i] == '1') {
                    awin++;
                }
                else {
                    alose++;
                }
            }
        }
        cout << i << '\n';
    }
}