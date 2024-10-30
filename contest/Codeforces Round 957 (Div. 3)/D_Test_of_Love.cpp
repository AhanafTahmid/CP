#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,m,k;cin>>n>>m>>k;
    vector<int>pr(n);
    string s;cin>>s;
    if(s[0]=='L') pr[0] = 1;
    for(int i=1;i<n;i++){
        if(s[i]=='L') pr[i] = pr[i-1] + 1;
        else pr[i] = pr[i-1];
    }

    int cost = 0;
    bool ok = 1;
    for(int i=0;i<n;i++){
        if(s[i]=='L'){
            if(pr[i]!=pr[min(i+m,n-1)]){
                i = min(n-1, i+m);
            }
            else i = min(n-1, i+m);
        }
        else if(s[i]=='W')cost++;
        else if(s[i]=='C'){
            ok = 0;
            break;
        }

        if(cost>k){
            ok = 0;
            break;
        }
        cout<< cost <<endl;
        
    }
    if(ok || n<=m)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;    
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}