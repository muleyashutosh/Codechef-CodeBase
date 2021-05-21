#include <iostream>
using namespace std;


int main () {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        bool INDIAN = false;
        int laddus = 0;
        cin >> n >> s;
        if(s == "INDIAN")
            INDIAN = true;
        for(int i = 0;i < n; i++) {
            cin >> s;
            if(s == "CONTEST_WON") {
                int rank;
                cin >> rank;
                if(rank <= 20) 
                    laddus += (300 + 20 - rank);
                else 
                    laddus += 300; 
                
            }
            else if(s == "TOP_CONTRIBUTOR") {
                laddus += 300;
            }
            else if(s == "BUG_FOUND") {
                int severity;
                cin >> severity;
                laddus += severity; 
            }
            else {
                laddus += 50;
            }
        }
        //cout << laddus;
        int count = 0;
        if(INDIAN) {
            count = laddus / 200;
        }
        else {
            count = laddus / 400;
        }
        cout << count << endl;

    }
}