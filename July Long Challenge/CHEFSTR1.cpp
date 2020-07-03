#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        long long count = 0;
        int x;
        cin >> x;
        n--;
        int prev = x;
        for(int i = 0 ; i < n; i++) {
            cin >> x;
            count += (long long)(abs(x - prev) - 1);
            //cout << count << " ";
            prev = x;
        }
        cout << count << endl;
    }
}