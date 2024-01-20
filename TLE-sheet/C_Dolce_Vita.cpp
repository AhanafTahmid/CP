#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,x;
    cin>>n>>x;
    vector<ll> a(n);
    ll sum = 0;
    for(ll &i: a)cin>>i, sum+=i;
    sort(a.begin(),a.end());
    for(ll i=1;i<n;i++)a[i]+=a[i-1];

    //for(ll i=0;i<n;i++)cout<<a[i]<<endl;

    ll days = 0;
    ll ans = 0;
    //take the total days
    for(ll i=n-1;i>=0;i--){
        //din gun
        a[i]+= (days*(i+1));//16+=din
        if(x-a[i]>=0){
            //14 baki
            ll d = ((x-a[i])/(i+1)) + 1;//total 4 din nite parbo, 4 din par hoise
            ans+= (d*(i+1));// din * price(people)
            //kotodin par hoise
            days+=d;
            //cout<<ans<<" = "<<days <<endl;
        }

    }
    cout<<ans<<endl;
    



}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}






