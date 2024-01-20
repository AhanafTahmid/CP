#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n,m;cin>>n>>m;
    vector<ll>a(m);
    for(ll &i:a)cin>>i;

    sort(a.begin(),a.end());
    vector<ll> diff;

    for(int i=0;i<m-1;i++){
        //cout<<a[i]<<" ";
        diff.push_back(abs(a[i]-a[i+1]+1));
    }
    ll v = (n-a[m-1]) + (a[0] - 1);
    diff.push_back(v);
    sort(diff.begin(),diff.end(),greater<int>());
    //for(auto x: diff)cout<<x<<" ";
    //cout<<endl<<endl;
    ll ans = 0 ;
    //cout<<ans<<endl;
    for(int i=0,j=0;i<m;i++,j+=2){
        //cout<<ans<<endl;
        ll tmp = (diff[i]-2*j);
        //(diff[i]-2*j)
        if(tmp<=0) break;
        if(tmp==1)ans++;//saving one
        ans+=(tmp-1);
    }
    cout<<n-ans<<endl;

}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}