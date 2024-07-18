#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    set<int>st;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            st.insert(i);
            if(n/i != i )st.insert(n/i);
        }
    }
    for(int x: st)cout<< x <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}