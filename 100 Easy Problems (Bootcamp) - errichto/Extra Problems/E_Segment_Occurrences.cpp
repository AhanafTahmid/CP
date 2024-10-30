#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, m, q;
    cin>> n >> m >> q;
    string s;cin>>s;
    string srch; cin>>srch;
    vector<int> pf;
    int ln = s.size();
    auto x = s.find(srch);
    while(x!= string::npos){
        //cout<< x <<endl;
        pf.push_back(x+srch.size());
        x = s.find(srch,x+srch.size());
    }

    int prfx[100000] = {};
    for(int i=1, j= 0;i<=ln;i++){
        if(pf[j]>=i) j++; 
        prfx[i] = prfx[i-1] + 1;
    }

    for(int i=0;i<ln;i++){

    }

    while(q--){
        int l, r; cin>> l >> r;
        int ans = 0;
        cout<< ans <<endl;
    }

 
}



signed main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}










