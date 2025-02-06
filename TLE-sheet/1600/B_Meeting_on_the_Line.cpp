#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> x(n), t(n);
    for(int &i: x)cin>>i;
    for(int &i: t)cin>>i;
    double l = 0, r = 1e9;
    for(int i=0;i<100;i++){
        m = (l+r)/2;
        bool ok = 0;
        for(int j=0;j<n;j++){
            

            if( ){
                ok = 0;
                break;
            }

        }
        if( ok ) r = m;
        else l = m;
        
    }
    int ans = (mn+mx);
    cout<< ans/2;
    if(ans%2) cout<< ".5";
    cout<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}