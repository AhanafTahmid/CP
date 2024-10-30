#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,q;
    cin>>n>>q;

    map<ll,ll> mp;
    ll sum = 0;

    for(ll i=1;i<=n;i++){
        ll x;cin>>x;
        mp[i] = x; 
        sum+=x;
    }

    ll f = 1;
    ll k1 = 0;
    ll val = 0;
    int ct = 0;
    
    while(q--){
        ll t;
        cin>>t;
        if(t==1){
            ll ind, x;
            cin>>ind>>x;
            //sum = sum - a[ind-1] + x;
            if(mp[ind]==0){
                mp[ind] = val;
            }
            sum = sum - mp[ind] + x;
            //cout<<mp[ind]<<" "<<sum<<endl;
            cout<<sum<<endl;
            mp[ind] = x;
        }
        else if(t==2){
            f = 0;
            ll x;
            cin>>x;
            cout<<x*n<<endl;
            sum = x*n;
            val = x;
            mp.clear();//it is O(logn)
        }

    }

}


int main(){

    ll t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}