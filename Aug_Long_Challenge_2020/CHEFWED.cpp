#include <iostream>
#include <vector>
#include <unordered_set>
#define us unordered_set
#define ve vector
using namespace std;


int main () {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        
        ve <int> arr(101);
        ve <int> guests(n);

        for(int i = 0; i < n; i++) {
            cin >> guests[i];
            arr[guests[i]]++;
        }
        int conflicts = 0 ;
        for (int x : arr) {
            if (x > 1) {
                conflicts += x;
            }
        }
        int out2 = conflicts + k;
        int out1 = k;
        bool allow_conflicts = false;
        us <int> tabel;
        for (int x: guests) {
            //cout << "out1:" << out1 << " out2:" << out2 << endl;
            if(out1 >= out2) {
                allow_conflicts = true;
                break;
            }
            auto z = tabel.find(x);
            if (z != tabel.end()) {
                out1 += k;
                tabel.clear();
            }
            tabel.insert(x);
            
        }
        //cout << conflicts;
        if(allow_conflicts) {
            cout << out2 << endl;
        }
        else {
            cout << out1 << endl;
        }
        
        //cout << min(out1,out2) << endl;
    }
}