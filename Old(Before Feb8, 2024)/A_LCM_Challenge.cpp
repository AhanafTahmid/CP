#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll lcm_fun(ll a,ll b){
    return a*b/__gcd(a,b);
}

void solve(){
    ll n;
    cin>>n;
    if(n<=2){
        cout<<n<<endl;
        return;
    }
    ll n1 = n;
    ll n2 = n-1;
    ll n3 = n-2;

    ll ans = 0;
    for(ll i=n3;i>=1;i--){
        ll lc = lcm_fun(n1,lcm_fun(n2,i));
        ans = max(lc,ans);
    }   

    for(ll i=n2;i>=1;i--){
        ll lc = lcm_fun(n1,lcm_fun(n3,i));
        ans = max(lc,ans);
    }   
    
    for(ll i=n1;i>=1;i--){
        ll lc = lcm_fun(n2,lcm_fun(n3,i));
        ans = max(lc,ans);
    }   

    cout<<ans<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}