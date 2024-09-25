#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a) cin>>i;
    int z = count(a.begin(),a.end(),1);
    if(z){
        cout<< n - z <<endl;
        return;
    }
    int g = a[0];
    for(int i=1;i<n;i++){
        g = __gcd(a[i], g);
    }
    if(g>1){
        cout<< -1 <<endl;
        return;
    }

    int ln = n;
    for(int i=0;i<n;i++){
        int g = a[i];
        for(int j=i+1;j<n;j++){
            g = __gcd(a[j], g);
            if(g==1){
                ln = min(ln, j-i);
                break;
            }
        }
    }
    cout<< ln + n - 1 <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}