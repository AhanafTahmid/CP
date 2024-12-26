#include <bits/stdc++.h>
using namespace std;
#define ll long long 

bool comp(pair<ll,ll> a, pair<ll,ll> b){
    return a.first>b.first;
}

bool comp2(pair<ll,ll> a, pair<ll,ll> b){
    return a.second<b.second;
}


void solve(){
    ll n;
    cin>>n;
    vector<pair<ll,ll>> a, b,c; 


    for(ll i=0;i<n;i++){
        ll x; cin>>x;
        a.push_back({x,i+1});
    }
    for(ll i=0;i<n;i++){
        ll x; cin>>x;
        b.push_back({x,i+1});
    }
    for(ll i=0;i<n;i++){
        ll x; cin>>x;
        c.push_back({x,i+1});
    }

    sort(a.begin(),a.end(),comp);
    sort(b.begin(),b.end(),comp);
    sort(c.begin(),c.end(),comp);
    //for(auto x: a)cout<<x.first<<" "<<x.second<<" ";
    //take 3 highest values
    vector<pair<ll,ll>> aa, bb,cc; 
    for(ll i=0;i<3;i++){
        aa.push_back({a[i].first,a[i].second});
        bb.push_back({b[i].first,b[i].second});
        cc.push_back({c[i].first,c[i].second});
    }


    sort(aa.begin(),aa.end(),comp2);
    sort(bb.begin(),bb.end(),comp2);
    sort(cc.begin(),cc.end(),comp2);


    ll sum = 0;
    ll mx = 0;
    //try all possibility
    for(ll i=0;i<3;i++){
        for(ll j=0;j<3;j++){
            for(ll k=0;k<3;k++){
                if(aa[i].second!=bb[j].second && bb[j].second!=cc[k].second && cc[k].second!=aa[i].second){
                    mx = max(aa[i].first + bb[j].first + cc[k].first, mx);

                    //cout<<mx<<endl;
                    //cout<<aa[i].second<<" "<<bb[j].second<<" "<<cc[k].second<<endl;
                }
            }
        }
    }
    cout<<mx<<endl;






}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}