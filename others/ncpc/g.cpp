#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    unordered_map<int, int> a;
    vector<int> b;
    //unordered_map<int, int> b;
    set<int> st;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a.insert({x,i});
        st.insert(x);
    }
    int f = 1;
    int start = 0, end = 0;
    int y = 0;
    for(int i=0;i<n;i++){
        y = 0;
        int x; cin>>x;
        if(a.find(x)==a.end() && f==1) start = i, f=0, y = 1;
        if(a.find(x)==a.end()) end = i, y = 1;
        st.insert(x);
        //b.insert({x,i});
        b.push_back(x);
    }
    //cout<< start <<endl;
    //cout<< end <<endl;
    b.erase(b.begin()+start, b.begin()+end+1);

    for(int i=0;i<n;i++){
        if(a[i]==)
    }

    // if(st.size()==n) cout<< 0 <<endl;
    // else if(st.size()==n+n) cout<< n <<endl;
    // else cout<< (end-start+1) <<endl;
}


signed main(){
    int t=1;
    //cin >> t;
    for(int i=1;i<=t;i++){
        //cout<< "Case "<<i<<": ";
        solve();
    }
    return 0;
}