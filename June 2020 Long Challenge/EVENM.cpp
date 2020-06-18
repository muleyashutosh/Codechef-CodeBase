#include <iostream>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(n % 2 != 0) {
            int x = 1;
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < n; j++) {
                    cout << x << " ";
                    x++;
                }
                cout << endl;
            }
        }
        else {
            int x = 1;
            int z = 0;
            for(int i = 0; i < n; i++) {
                
                if(i % 2 == 0) {
                    x = z + 1;
                    for(int j = 0; j < n; j++) {
                        cout << x << " ";
                        x++;
                    }
                }
                else {
                    x += n - 1;
                    z = x;
                    for(int j = n - 1; j >= 0; j--) {
                        cout << x << " ";
                        x--;
                    }

                }
                cout << endl;
            }
        }
    }      
}