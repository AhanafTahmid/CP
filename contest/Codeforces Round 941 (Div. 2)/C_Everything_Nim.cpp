#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    set<int> st;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        st.insert(x);
    }
    bool ok = 1;//Alice will win
    vector<int> a{st.begin(),st.end()};
    vector<int> b;
    for(int i=1;i<a.size();i++) b.push_back(a[i]-a[i-1]);
    for(int i=0;i<b.size();i++){
        //cout<< b[i] <<endl;
        if(b[i]>1){
            break;
        }
        if(i%2==0) ok = 1;
        else ok = 0;
    }
    cout<< (ok?"Alice":"Bob") <<endl;
}   

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}