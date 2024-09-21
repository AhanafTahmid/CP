#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    set<int>st;
    
    for(int i=0;i<n;i++){
        int x;cin>>x;
        st.insert(x);
    }
    
    int all = 0;
    k--;
    cout<< *st.begin() <<endl;
    all = *st.begin();
    st.erase(st.begin());

    while(k--){
        if(st.empty()) cout<< 0 << endl;
        else{
            int el = *st.begin() - all;
            cout<< el << endl;
            st.erase(st.begin());
            all+= el;
            if( el - all > 0 ) st.insert(el);
        }
    }
    //for(int x: st) cout<< x <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}