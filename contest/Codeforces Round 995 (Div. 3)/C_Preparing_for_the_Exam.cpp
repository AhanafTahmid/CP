#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, m, k;cin>>n>>m>>k;
    vector<int>a(m), b(k);
    for(int &i: a)cin>>i;
    for(int &i: b)cin>>i;
    if(k==n){
        for(int i=0;i<m;i++)cout<< '1';
        cout<<endl;
        return;
    }
    else if(k<=n-2){
        for(int i=0;i<m;i++)cout<< '0';
        cout<<endl;
        return;
    }
    sort(b.begin(),b.end());
    set<int>st;
    for(int i=0;i<k;i++){
        st.insert(b[i]);
    }
    
    string ans = "";
    for(int i=0;i<m;i++){
        if(st.count(a[i])) ans+= "0";
        else ans+= "1";
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