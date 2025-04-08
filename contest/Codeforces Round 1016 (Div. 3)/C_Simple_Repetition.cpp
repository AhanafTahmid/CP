#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, k;cin>>n>>k;
    bool ok = 1;

    if( k == 1 && (n == 2 || n == 3 || n == 5 || n == 7) ) {
        ok = 1;
    }
    else if(n==1 && k == 2) ok = 1;
    else if( k > 1 || n == 1) ok = 0;
    else if( n%2 == 0 || n%3 == 0 || n%5 == 0 || n%7 == 0) ok = 0;
    else{
        for(int i=2;i<=sqrt(n);i++){
            if( n % i == 0){
                ok = 0;
                break;
            }
        }
    }

    cout<< (ok ? "YES" : "NO") << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}