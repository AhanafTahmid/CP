#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;
    vector<ll>a(n);
    vector<ll>f(n+1);
    for(ll &i: a)cin>>i,f[i]++;

    sort(a.begin(),a.end());   

    //for(auto x:f)cout<<x<<" ";


    //If all distinct
    //7C3 ->  7! / 4!*6
    //If 2 distinct
    //7C2 ->  7! / 5!*2
    ll ans = 0;
    ll tot = 0;
    for(ll i=0;i<=n;i++){
        ll v = f[i];
        ans+=(v*(v-1)*(v-2))/6;// 210/6
        ans+=(v*(v-1))/2*tot;
        //ll x = (v*(v-1))/2*tot;
        tot+=v;
        //ll d = lower_bound(a.begin(),a.end(),a[i]) - a.begin();
        //cout<<f[i]<<" ";
        //ans+=x*d;
       //cout<<(v*(v-1)*(v-2))/6<<" "<<(v*(v-1))/2<<endl;
    }
    cout<<ans<<endl;

    
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}





#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    int f[n+1]={};
    for(int &i: a)cin>>i,f[i]++;
    int ans = 0;
    sort(a.begin(),a.end());
    for(int i=1;i<=n;i++){
        int p = lower_bound(a.begin(),a.end(),i) - a.begin();
        //cout<<p<<" "<<i<<endl;
        //nc3
        if(f[i]>=3){
            ans += (f[i] *( f[i] - 1) * (f[i] -2 ))/6;
        }
        //nc2 * all
        else if(f[i]==2) ans += ((f[i] * f[i]-1)/2)*p;
        //cout<<i<<" "<<f[i]<<endl;
    }
    cout<<ans<<endl;
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}