#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    map<int,int> mp;
    for(auto &x: a)cin>>x,mp[x]++;
    sort(a.begin(),a.end());
    ll ans = 0;
    for(int i=0;i<n;i++){
        ll v = a[i];
        if(mp[v]!=0){
            //until there is no element left
            ans++;
            while(mp[v]!=0){
                mp[v]--;//decrease frequency
                v++;//increase value
            }
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
