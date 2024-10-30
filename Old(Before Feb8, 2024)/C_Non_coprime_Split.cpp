#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}


void solve(){
    
    
    int l, r;   cin >> l >> r;
        for(int i = l ; i <= r ; i++) {
            for(int x = 2 ; x * x <= i ; x++) {
                if(i % x == 0) {
                    cout << x << " " << i - x << '\n';
                    return;
                }
            }
        }
        cout << -1 << '\n';

    
    
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}