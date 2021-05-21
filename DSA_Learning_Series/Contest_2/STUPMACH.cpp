#include <iostream>
#define rapid ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;

int main() {
    rapid
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0 ; i < n; i++) {
            cin >> arr[i];
            if(i > 0) {
                arr[i] = min(arr[i], arr[i-1]);
            } 
        }
        ll count = 0;
        for(int i = 0; i < n; i++) {
            count += arr[i];
        }
        cout << count << endl;
    }
	return 0;
}
