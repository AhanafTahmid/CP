#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, k, q;cin>>n>>k>>q;
    vector<int>sign(k), time(k);
    for(int &i: sign)cin>>i;
    for(int &i: time)cin>>i;
    while(q--){
        int x;cin>>x;
        int lw = lower_bound(sign.begin(),sign.end(),x) - sign.begin();
        long double s = sign[lw], t = time[lw];
        cout<<setprecision(0)<<fixed;
        if(lw==0) cout<< floor((t/s)*x) << ' ';
        else{
            long double s1 = sign[lw-1], t1 = time[lw-1];
            long double v = (t-t1) / (s-s1);
            cout<< floor(t1 + (v*(x-sign[lw-1]))) << ' ';
        }
    }
    cout<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}