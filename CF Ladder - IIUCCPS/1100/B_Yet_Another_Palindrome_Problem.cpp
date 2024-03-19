#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<pair<int, int> >a(n+1);
    map<int, int> mp;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(!mp[x]) mp[x] = i+1;
        else if(mp[x]){
            a[x] = {mp[x],i+1};
        }
    }
    for(auto [x,y]:a){
        if(y-x-1>=1 && x!=0 && y!=0){
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