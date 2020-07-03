#include <iostream>
using namespace std;


int find(int s, int n) {
    int i = n;
    int count = 0;
    if( s < n ) {
        if( s % 2 == 0) {
            return 1;
        }
        else {
            return 2;
        }
    }
    else {
        while(i > 0) { 
            //cout << endl << "COUNT: " << count << " S:"<< s << " i: " << i << endl;
            if(s % i == 0) {
                count += (s / i);
                return count;
            }
            else {
                count += (s / i);
                s -= (i * (s/ i));
                if( i == 2) {
                    i = 1;
                }
                else {
                    i -= 2;
                }
            }
            //cout << endl << "COUNT: " << count << " S:"<< s << " i: " << i << endl;
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        int s;
        cin >> s >> n;
        cout << find(s, n) << endl; 
    }
}