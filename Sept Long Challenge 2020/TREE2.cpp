#include <iostream>
#include <unordered_set>
#include <algorithm>

using namespace std;


int main() {
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        unordered_set <int> x;
        for(int i = 0; i < n; i++) {
            int z;
            cin >> z;
            if(z == 0)
                continue;
            x.insert(z);
        }
        cout << x.size() << endl;
    }
    
	return 0;
}
