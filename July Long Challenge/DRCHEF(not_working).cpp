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
        int pop = 0;
        sort(countries.begin(), countries.end());

        for(int i = 0; i < n; i++) {
            pop = countries[i];
            if(countries[i] <= x) {
                cout << endl << "ENTERED IF: " << endl;
                count++;
                cout << "COUNT: " << count << " x: " << x << " infected: " << countries[i] << " pop: " << pop << endl;
                x = countries[i] * 2;
                continue;
            }
            else {
                cout << endl << "ENTERED ELSE: " << endl;
                cout << "COUNT: " << count << " x: " << x <<  " infected: " << countries[i] << " pop: " << pop << endl;
                int z = 1;
                //count++;
                while(countries[i] > x) {
                    cout << endl <<  z << "th iteration" << endl;
                    count++;
                    cout << "\tCOUNT: " << count << " x: " << x << " infected: " << countries[i] << " pop: " << pop << endl;
                    int rem = pop - x;
                    countries[i] = min(rem*2, pop);
                    x = x * 2;
                    //count++;
                    //cout << "\tCOUNT: " << count << " x: " << x << " infected: " << countries[i] << " pop: " << pop << endl;
                    z++;

                }
                
            }
        }
        cout << count << endl;


    }
}