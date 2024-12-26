#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    map<int,int>mp;
    int ans = 0,sum=0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        mp[x] = 1;
        sum+=x;
        if(sum%2==0 && mp[sum/2]==1) ans++;
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