#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    set<int>st;
    vector<int>fr(1005,0);
    vector<pair<int,int>>vp;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        st.insert(x);
        fr[x]++;
    }


    if(st.size()==n){
        cout<<"YES"<<endl;
        return;
    }

    int sum = 0, mx = 0;
    for(int i=1;i<=1000;i++){
        vp.push_back({fr[i], i});
        sum+=fr[i];
        mx = max(mx , fr[i]);
    }
    sum-=mx;
    mx--;

    if(mx-sum<=0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}