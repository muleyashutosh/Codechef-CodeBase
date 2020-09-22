#include <iostream>
using namespace std;

int countCarsatMaxSpeed(int speeds[],int n) {
    if(n == 1 or n == 0)
        return n;
    int no_of_cars = n;
    for(int i = 0;i < n-1; i++) {
        if(speeds[i] < speeds[i+1] ) {
            no_of_cars--;
            speeds[i+1] = speeds[i];
        }
    }
    return no_of_cars;
}



int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    int speeds[n];
	    for(int i = 0 ;i < n; i++) {
	        cin >> speeds[i];
	    }
	    cout << countCarsatMaxSpeed(speeds,n) << endl;
	    
	}
	return 0;
}
