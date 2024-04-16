#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    if(n%2==0) cout<< ((k%n)?(k%n):n) <<endl;
    else{
        int mid = (n+1)/2;
        int passed = ( k - 1 ) / ( mid - 1 );
        if(mid>k) cout<< k <<endl;
        else{
            int ans = (((k%n)+passed)%n)?((k%n)+passed)%n: n;
            cout<< ans <<endl;
        }
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}