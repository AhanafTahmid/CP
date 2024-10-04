#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int minus = 0, plus = 0;
    for(int i=0;i<n;i++){
        char ch;cin>>ch;
        minus += ch=='-';
        plus += ch=='+';
    }
    int q;cin>>q;
    while(q--){
        int x,y;cin>>x>>y;
        int l = 0, r = 1e10, m;
        while(l+1<r){
            m = (l+r)>>1;
            
        }

        if(l)cout<<"YES" <<endl;
        else cout<< "NO" <<endl;
    }


}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}