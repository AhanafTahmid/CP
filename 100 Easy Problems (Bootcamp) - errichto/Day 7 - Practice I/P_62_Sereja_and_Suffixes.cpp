#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    int n, m;
    cin>> n >> m;
    vector<int> pf(n,0);
    map<int,int> mp;
    pf[0] = 1;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        mp[x]++;
        if(i>0 && mp[x]==1) pf[i] = pf[i-1] + 1;
        else if(i>0 && mp[x]>1) pf[i] = pf[i-1] + 0;
    }
    
    while(m--){
        int x;cin>>x;
        cout<< pf[n-1] - pf[x-1] + 1 <<endl;
    }
}


int main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}