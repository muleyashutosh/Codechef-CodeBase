#include <bits/stdc++.h>
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

void solve(int n, int k, int l) {
    if((k * l) < n || (k == 1 && n != 1 && l != 1)) {
        cout << -1 << endl; 
        return;
    }
    int num = 1;
    for(int i = 0 ; i < n; i++) {
        cout << num << " ";
        num++;
        if(num > k)
            num = 1;
    }
    cout << endl;
}   


int main () {
    rapid;
    int t;
    cin >> t;
    while(t--)  {
        int n, k, l;
        cin >> n >> k >> l;
 		solve(n, k, l);  
    }
}