#include <iostream>
using namespace std;


long long sum_of_digits(int n) {
    long long sum = 0;
    while(n > 0) {
        int dig = n % 10;
        sum += (long long) dig;
        n /= 10;
    }
    return sum;
}


int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        int chef = 0, morty = 0;
        cin >> n;
        for(int i = 0; i < n; i++) {
            int x,y;
            cin >> x >> y;
            long long a = sum_of_digits(x), b = sum_of_digits(y);
            if(a == b) {
                chef++;
                morty++;
            }
            else if(a > b) {
                chef++;
            }
            else {
                morty++;
            }
        }
        if(chef == morty) {
            cout << "2 " << chef << endl;
        }
        else if (chef < morty) {
            cout << "1 " << morty << endl;
        }
        else {
            cout << "0 " << chef << endl;
        }
    }
}