#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    string s1;cin>>s1;
    int f = 0;
    for(int i=1;i<s1.size();i++){
        if(i&1){
            if(s[i]=='<' && s1[i-1]=='<'){
                f = 1;
                break;
            }
        }
        else{
            if(s1[i]=='<' && s[i-1]=='<'){
                f = 1;
                break;
            }
        }
    }

    if(s1[n-2]=='<' || f)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}