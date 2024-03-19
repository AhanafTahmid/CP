#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int ct = 0, sum = 0;
    int mn = INT_MAX;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x<=0) sum+=(-x),ct++;
        else sum+=x;
        mn = min(mn, abs(x));
    }
    if(ct&1){
        cout<< sum - 2*mn <<endl;
    }
    else cout<<sum<<endl;
    

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}