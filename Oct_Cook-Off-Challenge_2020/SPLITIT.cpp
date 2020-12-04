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
        string s;
        cin >> s;
        unordered_set <char> x;
        for(int i = 0; i < n-1; i++) {
            x.insert(s[i]);
        }
        if(x.find(s[n-1]) != x.end()) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}