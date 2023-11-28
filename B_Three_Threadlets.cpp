#include <iostream>
#include <algorithm>
using namespace std;

bool canDivide(int a[], int total) {
    // Sort the threadlets
    sort(a, a+3);
    
    // Case when no cut is needed
    if (a[0] == a[1] && a[1] == a[2]) return true;
    
    // Case when 1 cut is needed
    if (a[2] == a[0] + a[1]) return true;
    
    // Case when 2 cuts are needed
    int remaining = total/3 - a[0];
    if (a[1] <= remaining && a[2] >= 2*remaining) return true;
    
    // Case when 3 cuts are needed
    if (a[2] - (total - a[2]) <= a[0]) return true;

    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        int total = a[0] + a[1] + a[2];
        if (total % 3 == 0 && canDivide(a, total)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
