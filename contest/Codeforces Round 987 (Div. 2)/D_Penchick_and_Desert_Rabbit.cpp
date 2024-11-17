#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n), ans(n);
    for(int &i:a)cin>>i;
    map<int, int> mp1, mp2;
    int mx = 0, s = 0, s1 = 0;
    for(int i=0;i<n;i++){
        mx = max(a[i], mx);
        mp1[i] = mx;
    }
    mx = 0;
    for(int i=n-1;i>=0;i--){
        mx = max(a[i], mx);
        mp2[i] = mx;
    }


    for(int i=0;i<n;i++){
        s+= mp1[i];
    }
    for(int i=0;i<n;i++){
        s1+= mp2[i];
    }

    if(s>=s1){
        for(auto [x,y]: mp1) cout<< y << ' ';
        cout<<endl;
    }
    else{
        for(auto [x,y]: mp2) cout<< y << ' ';
        cout<<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}