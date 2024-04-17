#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s;cin>>s;
    int n = s.size(), ans = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(j+3<n && s[j]=='b' && s[j+1]=='e' && s[j+2]=='a' && s[j+3]=='r'){
                ans = ans + (n - j - 3);
                break;
            }
        }
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