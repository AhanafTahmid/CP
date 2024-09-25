#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n,0), pr(n+1, 0);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(!i) pr[i] = a[i];
        else pr[i] = a[i] ^ pr[i-1];
    }
    //2
    for(int i=0;i<n;i++){
        if(  pr[i] == (pr[n-1]^pr[i]) ){
            cout<< "YES" <<endl;
            return;
        }
    }
    //3
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int v1 = pr[i];
            int v2 = pr[j] ^ pr[i];
            int v3 = pr[n-1] ^ pr[j];
            if(  v1 == v2 && v2 == v3 ){
                cout<< "YES" <<endl;
            return;
            }
        }
    }
    cout<< "NO" <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}