#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]&1) a[i] = a[i] + a[i]%10;
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n-1;i++){
        if( a[i] == a[i+1] ) continue;
        int p = (a[i+1] - a[i])/20;
        if(p>=1 && a[i]%10!=0 && a[i+1]%10!=0) a[i] = a[i] + (p*20);
        for(int j=0;j<5;j++){
            if(a[i]==a[i+1])break;
            a[i] = a[i] + a[i]%10;
        }
        if(a[i]!=a[i+1]){
            cout<< "No" <<endl;
            return;
        }
    }
    cout<< "Yes" <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}