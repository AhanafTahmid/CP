#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,k,r,c;cin>>n>>k>>r>>c;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            ((i+j)%k==(r+c)%k)?cout<<'X':cout<<'.';
        }
        cout<<endl;
    }

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}