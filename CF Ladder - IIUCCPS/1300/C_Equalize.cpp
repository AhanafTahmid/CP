#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

bool ok(string &a, string &b, int i){
    return a[i]=='0' && b[i]=='1' && a[i+1]=='1' && b[i+1]=='0';
}

void solve(){
    int n;cin>>n;
    string a,b;cin>>a>>b;
    int ans = 0;
    for(int i=0;i<n;){
        if(a[i]!=b[i]){
            if(i+1<n && ok(a,b,i)) i+=2, ans++;
            else if(i+1<n && ok(b,a,i)) i+=2, ans++;
            else ans++,i++;
        }
        else i++;
    }    
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}