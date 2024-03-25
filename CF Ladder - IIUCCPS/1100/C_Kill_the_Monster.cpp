#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int hc,dc;cin>>hc>>dc;
    int hm,dm;cin>>hm>>dm;
    int k,w,a;cin>>k>>w>>a;

    int hcc = 0, dcc = 0;
    for(int i=0;i<=k;i++){
        hcc = hc + (i*a);
        dcc = dc + (k-i)*w;
        int tmc = (hcc+dm-1)/dm;
        int tmm = (hm+dcc-1)/dcc;//my killing time of monster, should be lesser
        if(tmc>=tmm){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}