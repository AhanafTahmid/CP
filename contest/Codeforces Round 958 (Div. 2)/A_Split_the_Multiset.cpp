#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, k;cin>>n>>k;
    if(n==1)cout<< 0 <<endl;
    else if(n<=k)cout<< 1 <<endl;
    else{
        int ans = 0;
        while(1){
            n-=(k-1);
            ans++;
            if(n<=1){
                break;
            }
        }
        cout<< ans <<endl;
    }
    
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}