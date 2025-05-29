#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string p, s;cin>>p>>s;
    int n = p.size(), m = s.size(), i = 0, j = 0, ct = 0;

    if(n>m || 2*n < m){
        cout<<"NO"<<endl;
        return;
    }

    vector<array<int,2>>a, b;
    while(i<n){
        while(i<n && p[i] == 'L')i++, ct++;
        if(ct>0)a.push_back({0,ct});
        ct = 0;
        while(i<n && p[i] == 'R')i++, ct++;
        if(ct>0)a.push_back({1,ct});
        ct = 0;
    }

    ct = 0;
    while(j<m){
        while(j<m && s[j] == 'L')j++, ct++;
        if(ct>0)b.push_back({0,ct});
        ct = 0;
        while(j<m && s[j] == 'R')j++, ct++;
        if(ct>0)b.push_back({1,ct});
        ct = 0;
    }
    
    i = 0;
    bool ok = 1;
    if( a.size() != b.size() ){
        ok = 0;
    }

    for(i=0;i<a.size();i++){
        if( a[i][0] != b[i][0] ) ok&=0;
        if( a[i][1] > b[i][1] || a[i][1]*2 < b[i][1] ) ok&=0;
    }

    cout<< ( ok ? "YES" : "NO") << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}