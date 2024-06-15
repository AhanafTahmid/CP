#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    vector<int>a(n), ct(31);
    for(int i=0;i<n;i++){
        cin>>a[i];
        for(int j=0;j<=30;j++){
            if( (a[i] & (1<<j)) == 0 ) ct[j]++;
        }
    }

    int ans = a.front();
    for(auto x: a) ans&=x;

    for(int i=30;i>=0;i--){
        if(ct[i]!=0 && (k/ct[i])>0){
            ans |= (1<<i);
            k-=ct[i];
        }
    }

    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}