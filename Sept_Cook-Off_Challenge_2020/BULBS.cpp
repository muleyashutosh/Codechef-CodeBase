#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

void solve(int n, int k, string s) {
    int count_0 = 0;
    for(char x: s) {
        if(x == '0')
            count_0++;
    }
    if(count_0 == n || count_0 == 0) {
        cout << 0 << endl;
        return;
    }
    if(k == 0) {
        cout << count_0 << endl;
        return;
    }
    vector <int> sides;
    int cnt = 0;
    int l;
    for(int i = 0; i < n; i++) {
        if(s[i] == '1') {
            l = i;
            if(cnt != 0) sides.emplace_back(cnt);
            break;
        }
        else 
            cnt++;
    }

    int r;
    cnt = 0;
    for(int i = n-1; i >= 0; i--) {
        if(s[i] == '1') {
            r = i;
            if(cnt != 0) sides.emplace_back(cnt);
            break;
        }
        else 
            cnt++;

    } 
    vector <int> mids;
    for(int i = l; i <= r; i++) {
        int count = 0;
        while(s[i] == '0') {
            count++;
            i++;
        }
        if(count != 0) mids.emplace_back(count);
    }
    
    sort(mids.begin(), mids.end());
    sort(sides.begin(), sides.end());

    if((k & 1) != 0) {
        k--;
        sides.pop_back();
    }
    while(k > 2 && !mids.empty()) {
        k -= 2;
        mids.pop_back();
    }
    if(mids.empty()) {
        while(!sides.empty() && k > 1) {
            k--;
            sides.pop_back();
        }
    }
    if(!mids.empty() && !sides.empty()) {
        
    }


    
}

int main () {
    rapid;
    int t;
    cin >> t;
    while(t--)  {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        solve(n, k, s);
    }
}