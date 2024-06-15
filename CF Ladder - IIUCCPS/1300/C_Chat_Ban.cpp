#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int int64_t

void solve(){
    int k, x;cin>>k>>x;
    auto c = [](int v){
        return (v*(v+1))/2;
    };
    if(k*k<=x){
        cout<< 2*k - 1 <<endl;
        return;
    }
    int l = 0, r = 2*k, m;
    if(c(k)>=x){
        while(l+1<r){
            m = l+(r-l)/2;
            if(c(m)>x) r = m;
            else l = m;
        }
        if(c(l)==x)cout<< l <<endl;
        else cout<< r <<endl;
    }
    else{
        int val = k*k;
        while(l+1<r){
            m = l+(r-l)/2;
            if(val-c(2*k-1-m)>x) r = m;//this -1 I've been not thinking for so long 
            else l = m;
        }
        if(val-c(2*k-1-l)==x)cout<< l <<endl;
        else cout<< r <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}