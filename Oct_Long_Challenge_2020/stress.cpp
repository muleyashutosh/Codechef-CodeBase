#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

int fast(int n, int k, vector <int> ar) {
    ll sum = 0;
    for(int i = 0; i < n; i++) {
        sum += ar[i];
    }
    return (sum / k) + 1;

}


int slow(int n, int k, vector <int> ar) {
    ll carry = 0;
    int count = 0;
    for(int i = 0; i < n; i++) {
        count++;
        if((carry + ar[i]) < k) {
            return count;
        }
        else {
            ll tot = (carry + ar[i]) - k;
            carry = tot;
        }
    }
    return (count + (carry / k) + 1);

}

int main () {
    rapid;
    while(true)  {
        int n, k;
        n = 1 + (rand() % 10);
        k = 1 + (rand() % 10);
        cout << n << " " << k << endl;
        vector <int> ar(n);
        for(int i = 0; i < n; i++) {
            ar[i] = rand() % 10;
            cout << ar[i] << " ";
        }
        cout << endl;
        int ans1 = slow(n, k, ar);
        int ans2 = fast(n, k, ar);
        cout << ans1 << " " << ans2;
        if(ans1 != ans2) {
            cout <<" FAILED\n";
            //break;
        }
        else {
            cout << "OK\n";
        }

    }
}