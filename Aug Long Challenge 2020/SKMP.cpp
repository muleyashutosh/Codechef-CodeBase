#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


void solve(string s, string p) {

    for (char x : p) {
        size_t z = s.find(x);
        if(z != string::npos)
            s.erase(z,1);
    }
    sort(s.begin(),s.end());

    int n = s.length();
    int pos = s.length();
    bool flag = false;

    for(int i = 0; i < n; i++) {
        int j = 0;
        if(s[i] > p[j]) {
            pos = i;
            break;
        }
        if(s[i] == p[j]) {
            while(j < p.length() - 1) {
                if(s[i] > p[j+1]) {
                    pos = i;
                    flag = true;
                    break;  
                }
                if(s[i] < p[j+1]) {
                    break;
                }
                j++;
            }
        }
        if(flag) {
            break;
        }
    }
    s.insert(pos,p);
    cout << s;
}


int main () {
    int t;
    cin >> t;
    while(t--) {
        string s, p;
        cin >> s >> p;
        solve(s, p);
        cout << endl;
    }
}