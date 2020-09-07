#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


int main () {
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector <int> num(n);
        unordered_map<int,int> freq;
        for(int i = 0 ; i < n; i++) {
            cin >> num[i];
            freq[num[i]]++;
        }
        
        unordered_map<int,int> counts;
        for(auto x = freq.begin(); x != freq.end() ; x++ )  {
          counts[x->second]++;
        }

        int max;
        int maxcount = -1;
        for(auto x = counts.begin(); x != counts.end() ; x++ )  {
          if(maxcount < x->second) {
              maxcount = x->second;
              max = x->first;
          }
          if(maxcount == x->second) {
              max = min(x->first, max);
          }
        }
        
        cout << max << endl;
      
    } 

}