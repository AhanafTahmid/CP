#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    if(n<=k) cout<< 1 <<endl;
    else{
        set<int, greater<int>>st;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) {
                if(i<=k)st.insert(i);
                if(n/i != i && n/i<=k) st.insert(n/i);
            }
        }
        for(auto x: st){
            cout<< n/x <<endl;
            return;
        }
        cout<< n <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}