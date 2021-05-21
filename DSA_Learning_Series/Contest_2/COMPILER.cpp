#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

void solve(string bracks) {
    stack <char> st;
    ll count = 0;
    for(char x: bracks) {
        if(x == '<') {
            st.push(x);
        }
        else {
            if(!st.empty()) {
                count += 2;
                st.pop();
            } 
        }
    }
    
    
    cout << count << endl;
}


int main () {
    rapid
    int t;
    cin >> t;
    while(t--)  {
        string bracks;
        cin >> bracks;
 		solve(bracks);   
    }
}
