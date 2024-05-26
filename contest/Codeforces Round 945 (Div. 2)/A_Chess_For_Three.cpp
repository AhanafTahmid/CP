#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int a,b,c;cin>>a>>b>>c;
    vector<int>v{a,b,c};
    int ans = 0;
    if((v[0]+v[1]+v[2])%2){
        cout<< -1 <<endl;
        return;
    }
    while(1){
        sort(v.rbegin(),v.rend());
        if(v[0]==0 || v[1]==0)break;
        else{
            v[0]--;
            v[1]--;
            ans++;
        }
    }
    cout<< ans <<endl;  
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}