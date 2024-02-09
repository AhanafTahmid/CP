#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, m;
    cin>> n >> m;
    int room[n+1];
    int prfx[n]={};
    
    for(int i=0;i<n;i++){
        cin>>room[i];
        if(i==0) prfx[i] = room[i];
        else prfx[i] = prfx[i-1] + room[i]; 
    }
    while(m--){
        int deliver;
        cin>>deliver;
        int lw = lower_bound(prfx,prfx+n,deliver) - prfx;
        if(lw==0)cout<< lw+1 << " " <<deliver<<endl;
        else cout<< lw+1 << " "<<deliver-prfx[lw-1]<<endl;
    }

}


signed main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}