#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    string a,b;cin>>a>>b;
    int ct = 0, st = 0;
    vector<pair<int, int>> vp;
    for(int i=0;i<n;i++){
        if(a[i]=='0')ct++;
        else ct--;
        if(ct==0){
            vp.push_back({st, i});
            st = i + 1;
        }
    }

    for(auto [x,y]: vp){
        if(a[x]==b[x])continue;
        else{
            for(int i=x;i<=y;i++){
                a[i] = a[i] ^ '0' ^ '1';
            }
        }
    }

    if(a==b)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}