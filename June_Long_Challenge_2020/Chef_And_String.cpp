#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
    
        string s;
        cin >> s;
        int i = 0;
        char prev = -1;
        int count = 0;
        while(i < s.size()) {
        
            if(prev != -1 && prev != s[i]) {
                count++;
                i++;
                prev = s[i];
            }
            else {
                prev = s[i];
                i++;
            }
        }
        cout << count << endl;
    }
  
}

