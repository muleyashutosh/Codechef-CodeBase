#include <iostream>
using namespace std;

void Count_coins() {
    int I,N,Q;
    cin >> I >> N >> Q;
    if (N % 2 == 0) {
        cout << N / 2 << endl;
    }
    else {
        if(I == Q) {
            cout << N / 2 << endl;
        }
        else {
            cout << (N / 2) + 1 << endl;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int G;
        cin >> G;
        while(G--) {
            Count_coins();
        }
    }
}