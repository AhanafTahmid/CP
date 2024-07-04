#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n),b(n);
    for(int &i: a)cin>>i;
    for(int &i: b)cin>>i;
    bool ok = 0;
    for(int i=0;i<n;i++){
        if(a[i]>b[i]){
            ok = 1;
            break;
        }
    }

    for(int i=0;i<n;i++){
        if(a[i]==b[i])continue;

        if(i==n-1 && b[i]>b[0]+1){
            ok = 1;
            break;
        }
        else if(i+1<n){
            if(b[i]>b[i+1]+1){
                ok = 1;
                break;
            }
        }
    }
    if(!ok) cout<< "YES" <<endl;
    else cout<< "NO" <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}