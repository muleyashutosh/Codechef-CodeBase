#include <iostream>
using namespace std;

int solve(int x) {
    int count = 0;
    if(x % 9 == 0) {
        return x/9;
    }
    while(x > 0) {
        //cout << count << " " << x << endl;
        count += (x/9);
        x %= 9;
        if(x < 9 && x != 0) {
            count++;
            break;
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int c,r;
        cin >> c >> r;
        int x = solve(c),y = solve(r);
        if(x < y) 
            cout << 0 << " " << x << endl;
        else
            cout << 1 << " " << y << endl;
    }
}