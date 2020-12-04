#include "bits/stdc++.h"
#define endl "\n"
#define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

class Graph {
    public: 
    map <ll, list<ll>> mp;
    map <ll,ll> dist;

    Graph(ll n) {
        for(ll i = 1; i <= n; i++) {
            list <ll> x;
            mp[i] = x;
            
        }
       
    }

    void addEdge(ll u ,ll v) {
        mp[u].emplace_back(v);
        mp[v].emplace_back(u);
    }

    void bfs(ll src) {
        queue <ll> qu;
        map <ll,bool> vis; 

        qu.push(src);
        vis[src] = true;
        dist[src] = 0;
        // cout << src << " ";
        while(!qu.empty()) {
            ll node = qu.front();
            qu.pop();
            // cout << node << " ";
            for(ll nbr: mp[node]) {
                if(!vis[nbr]) {
                    qu.push(nbr);
                    vis[nbr] = true;
                    dist[nbr] = dist[node] + 1;
                }
            }
        }

    }
};

void solve() {
    int t;
    cin >> t;
    while(t--) {
        ll n, m, k;
        map <ll, bool> spcheck;
        cin >> n >> m >> k;
        Graph mg(n);
        for(int i = 0 ; i < m ; i++) {
            ll u, v;
            cin >> u >> v;
            mg.addEdge(u, v);
        }
        vector <ll> specials(k);
        for(int i = 0 ; i < k; i++) {
            cin >> specials[i];
            spcheck[specials[i]] = true;
        }

        ll q;
        cin >> q;
        for(int i = 0 ; i < q; i++) {
            ll src;
            cin >> src;
            if(spcheck[src]) {
                cout << 0 << endl;
            }
            else {
                mg.bfs(src);
                // cout << "DIST_ARR ";
                // for(auto x: mg.dist) {
                //     cout << x.first <<":" << x.second << " ";
                // }
                // cout << endl;
                ll mindist = __INT_MAX__;
                bool poss = false;
                for(ll node: specials) {
                    if(mg.dist[node] > 0) {
                        poss = true;
                        if(mg.dist[node] < mindist) {
                            mindist = mg.dist[node];
                        }
                    }
                }
                if(poss) {
                    cout << mindist << endl;
                }
                else {
                    cout << -1 << endl;
                }
                mg.dist.clear();
            }
            
        }
    }

}


int main () {
    rapid;
    solve();
}