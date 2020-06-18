#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long findMaxRevenue(vector<int> budgets) {
    long long max_rev = -1;
    int buyers = budgets.size();
    for(int i = 0; i < budgets.size(); i++) {
        long long rev = 0;
        rev =(long long) budgets[i] * buyers;
        if(max_rev < rev) {
            max_rev = rev;
        }
        buyers--;
    }
    return max_rev;
}


 

int main() {
    int n;
    cin >> n;
    vector <int> budgets(n);
    for(int i = 0; i < n; i++) {
        cin >> budgets[i];
    }
    sort(budgets.begin(),budgets.end());
    cout << (long long) findMaxRevenue(budgets);
	return 0;
}
