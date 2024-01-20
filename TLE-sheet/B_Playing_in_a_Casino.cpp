#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n,m;
    cin>>n>>m;
    vector<int> a[m];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            int x;cin>>x;
            a[j].push_back(x);
        }
    }
    ll ans = 0;
    for(ll i=0;i<m;i++){
        sort(a[i].begin(),a[i].end());
        for(ll j=0;j<n;j++){
            //cout<<a[i][j]*(j- (n - j - 1))<<" ";//ai - (i-sum), for 1 base index , n-j+1
            ans+= a[i][j]*(j- (n - j - 1));
        }
        // //cout<<ans;
        //cout<<endl<<endl;
    }
   // cout<<endl<<endl;
    cout<<ans<<endl;






}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}