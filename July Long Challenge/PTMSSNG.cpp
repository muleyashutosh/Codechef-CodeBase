#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        unordered_set <int> starts,ends;
        int n;
        cin >> n;
        for(int i = 0; i < 4*n - 1; i++) {
            int st, en;
            cin >> st >> en;
            if(starts.find(st) != starts.end()) {
                starts.erase(st);
            }
            else {
                starts.insert(st);
            }
            if(ends.find(en) != ends.end()) {
                ends.erase(en);
            } 
            else {
                ends.insert(en);
            }
        }
        cout << *starts.begin() << " " << *ends.begin() < endl;
    }
}