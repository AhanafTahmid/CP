#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mx = 1e13;
void solve(){
    ll n;
    cin>>n;
    vector<ll> b;
    ll oct = 0, ect = 0;
    for(ll i=0;i<n;i++){
        ll x; cin>>x;
        b.push_back(x);
        if(b[i]%2==1) oct++;
        else if(b[i]%2==0) ect++;
    }
    if(oct>=1 && ect>=1){//there is atleast 1 odd,1 even
        cout<<2<<endl;
        return;
    }


    //only odds or only evens    
    set<ll> st;
    for(ll k=1;;k*=2){// for bit count use k^2
        st.clear();
        for(ll x: b){
            st.insert(x%k);
        }
        if(st.size()==2){
            cout<<k<<endl;
            return;
        }
    }
    
    
    

}


signed main(){

    ll t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}

