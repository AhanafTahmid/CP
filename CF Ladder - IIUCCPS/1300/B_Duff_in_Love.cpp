#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    map<int, int>mp;
    set<int,greater<int>>st, st2;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            mp[i] = 1;
            st.insert(i);
            st2.insert(i);
            if(n/i!=i)mp[n/i] = 1, st.insert(n/i), st2.insert(n/i);
        }
    }
    mp[n] = 1;
    st.insert(n);
    st2.insert(n);
    int ans = n;
    for(int i=2;i*i<=n;i++){
        if(ans%(i*i)==0){
            mp[ans] = -1;
            mp[i*i] = -1;
            st2.erase(st2.begin());
            ans = *st2.begin();
        }
    }
    for(auto x: st){
        //cout<< x << ' ';
        if(mp[x]!=-1){
            cout<< x <<endl;
            return;
        }
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}