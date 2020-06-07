#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--) {
        bool working = true;
        unordered_map <int, int> wallet;
        wallet[5] = 0;
        wallet[10] = 0;
        wallet[15] = 0;
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++) {
            int money = a[i];
            
            wallet[money]++;
            if (money == 5)
                continue;
            if (wallet[money - 5]) {
                wallet[money - 5]--;
            }
            else if(money - 5 == 10 && wallet[10] == 0) {
                if (wallet[5] >= 2)
                    wallet[5] -= 2;
                else {
                    working = false;
                    break;
                }
                    
            }
            else {
                working = false;
                break;
            }
        }
        if(working) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}

