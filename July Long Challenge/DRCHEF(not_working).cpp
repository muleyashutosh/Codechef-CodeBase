#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        long long x;
        cin >> n >> x;
        vector <int> countries(n);
        for(int i = 0; i < n; i++) {
            cin >> countries[i];
        }
        int count = 0;
        sort(countries.begin(), countries.end());
        while(true) {
            if (countries.empty()) {
                break;
            }
            if(x >= countries.front()) {
                countries.erase(countries.begin());
            }
            x = (long long) x * 2;
            count++;
        }
        cout << count;


    }
}