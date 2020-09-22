#include <iostream>
using namespace std;


int solve(int n , int k, int arr[]) {
    int count = 1;
    int sum = 0;
    for(int i = 0 ; i < n; i++) {
        sum += arr[i];
        //cout << sum << "\n";
        if(sum > k) {
            sum = arr[i];
            count++;
        }
        

    }

    return count;
}



int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int boxes[n];
        bool possible = true;
        for(int i = 0 ; i < n; i++ ){
            cin >> boxes[i];
            if(boxes[i] > k) {
                possible = false;
            }
        }
        if(!possible) {
            cout << -1 << '\n';
            continue;
        }

        cout << solve(n,k,boxes) << '\n';

    }
}