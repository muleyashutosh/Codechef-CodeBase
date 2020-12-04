#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

void solve() {
    string s;
    getline(cin, s);
    int sm = 0, cp = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] != ' ' && s[i] >= 97) {
            sm++;
        }
        else if (s[i] != ' ' && s[i] < 91) {
            cp++;
        }
    }
    cout << cp << " " << sm << endl;
}


int main () {
    rapid;
    solve();
}