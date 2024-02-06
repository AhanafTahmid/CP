#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

ll pr [10000001]={};

set<ll> st;
void sieve(ll n){
    for(int i=2;i*i<=n;i++){
        if(pr[i]==0){
            for(int j=i*i;j<=n;j+=i){
                pr[j] = 1;
            }
        }
    }
    for(int i=2;i<=1000001;i++){
        if(pr[i]==0) st.insert((long long)i*i);//must have to convert to long long or will get error for 999966000289
    }
}

void solve(){
    sieve(1000001);
    ll n;
    cin>> n;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        if(st.find(x)!=st.end())cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}