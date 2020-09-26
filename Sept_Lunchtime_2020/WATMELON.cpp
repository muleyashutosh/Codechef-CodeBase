#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;


int main () {
    rapid;
    int t;
    cin >> t;
    while(t--)  {
        int n;
        cin >> n;
        bool ans = true;
        int arr[n];
        int sum = 0;
        for(int i = 0 ; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        if(sum >= 0) {
            ans = true;
            cout << "YES" << endl;
            continue;
        }
        else {
            cout << "NO" << endl;
        }

    }
}