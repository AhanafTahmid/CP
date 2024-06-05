#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    if(n%2==0)cout<< n/2 << ' ' << n/2 <<endl;
    else{
        bool f = 0;
        for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            cout<< n/i << ' ' << n - n/i <<endl;
            f = 1;
            return;
            }
        }
        if(!f)cout<< 1 << ' ' << n-1 <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}