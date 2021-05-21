#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

int cnt = 0;

bool inMat(int i , int j, int n, int m) {
    return (i >= 0 and i < n ) and (j >= 0 and j < m);
}

void dfs(string arr[], int i, int j, int n, int m) {
    if(!inMat(i, j, n, m) or arr[i][j] != '1') {
        return;
    }
    cnt++;
    arr[i][j] = '#';
    dfs(arr, i+1, j, n, m);
    dfs(arr, i, j+1, n, m);
    dfs(arr, i, j-1, n, m);
    dfs(arr, i-1, j, n, m);
}

void solve() {
    int t;
    cin >> t;
    while(t--)  {
        int n, m;
        cin >> n >> m;
        string arr[n];
        vector <int> values;
        for(int i = 0; i < n; i++) {
        	cin >> arr[i];
        }

        for(int i = 0 ; i < n ; i++) {
            for(int j = 0; j < m ; j++) {
                if(arr[i][j] == '1') {
                    cnt = 0;
                    dfs(arr, i, j, n, m);
                    values.push_back(cnt);
                }
            }
        }
        
        sort(values.begin(), values.end(), greater<int>());
        int score = 0;
        for(int i = 0 ; i < values.size(); i++) {
            if(i & 1) {
                score += values[i];
            }
        }
        cout << score << endl;
        cnt = 0;
    }

}


int main () {
    // #ifndef ONLINE_JUDGE
    //     freopen("in.txt", "r ", stdin);
    //     freopen("out.txt", "w", stdout);
    // #endif
    rapid;
    solve();
}
