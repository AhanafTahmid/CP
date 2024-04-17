#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int cl(int a, int b){
    return (a+b-1)/b;
}

void solve(){
    int n;cin>>n;
    vector<pair<int,int>> vc, ans;
    int ones = 0;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        vc.push_back({x,i});
        (x==1)? ones++: 0;
    }
    if(ones>=1 && ones!=n){
        cout<< -1 <<endl;
        return;
    }
    sort(vc.begin(),vc.end());
    int f;
    while(1){
        f = 0;
        for(int i=0;i<n;i++){
            if(i+1<n && vc[i].first==vc[i+1].first)continue;
            else if(i+1<n && cl(vc[i].first, vc[i+1].first)>=2){
                vc[i].first = cl(vc[i].first, vc[i+1].first);
                ans.push_back({vc[i].second, vc[i+1].second});
                f = 1;
                break;
            }
            else if(i+1<n && cl(vc[i+1].first, vc[i].first)>=2){
                vc[i+1].first = cl(vc[i+1].first, vc[i].first);
                ans.push_back({vc[i+1].second, vc[i].second});
                f = 1;
                break;
            }
        } 
        if(!f) break;
    }
    
    cout<< ans.size() <<endl;
    for(auto [x,y]: ans)cout<< x << ' ' << y <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}