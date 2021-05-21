#include <bits/stdc++.h>
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

int main () {
    rapid
    int t;
    cin >> t;
    while(t--)  {
        int n;
        cin >> n;
        int cost = 0, maxcost = -1;
        for(int i = 0 ; i < n; i++) {
            int s, p, v;
            cin >> s >> p >> v;
            if(p <= s) {
                cost = 0;
            }
            else {
                cost = (p / (s + 1)) * v;
            }
            if(maxcost < cost) {
                maxcost = cost;
            }
            // cout << maxcost << " " << cost << endl;
        }
        cout << maxcost << endl;
        
    }
}