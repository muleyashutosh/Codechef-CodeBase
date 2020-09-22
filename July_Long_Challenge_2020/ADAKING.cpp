#include <iostream>
using namespace std;


int main () {

    char a[8][8];
    for(int i = 0 ; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            a[i][j] = 'X';
        }
    }

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int  i = 0, j = 1;
        a[0][0] = 'O';
        int cnt = 1;
        while(cnt < n) {
            if(j > 7) {
                i++;
                j = 0;
            }
            a[i][j] = '.';
            j++;
            cnt++;
        }
        for(int i = 0 ; i < 8; i++) {
            for(int j = 0; j < 8; j++) {
                cout << a[i][j];
            }
            cout << endl;
        }

    }
}