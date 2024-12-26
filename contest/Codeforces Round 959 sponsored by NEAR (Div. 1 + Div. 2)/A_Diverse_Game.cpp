#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, m;cin>>n>>m;
    vector<int>a(n*m), b(n*m), t(n*m);
    iota(b.begin(),b.end(), 1);

    for(int i=0;i<n*m;i++) cin>>a[i];
    
    if(n==1 && m==1){
        cout<< -1 <<endl;
        return;
    }

    int ct = 10000;
    while(ct--){
        t = b;
        for(int i=0;i<n*m;i++){
            if(i-1>=0 && a[i]==b[i]){
                swap(b[i],b[i-1]);
                break;
            }
            else{
                swap(b[i],b[i+1]);
                break;
            }
        }
        if(t==b)break;
    }

    for(int i=1;i<=n*m;i++){
        cout<< b[i-1] << ' ';
        if(i%m==0)cout<<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}