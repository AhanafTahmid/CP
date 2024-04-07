#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int ct0,ct1;cin>>ct0>>ct1;
    string s;cin>>s;
    int n = ct0 + ct1;
    int f = 1;

    for(int i=0;i<n;i++){
        if(s[i]!='?'){
            if(s[n-i-1]!='?') f &= (s[i]==s[n-i-1]);
            else{
                s[n-i-1] = s[i];
            }
        }  
    }

    for(int i=0;i<n;i++){
        s[i]=='0'?ct0--:0;
        s[i]=='1'?ct1--:0;
    }
    
    for(int i=0;i<n-i-1;i++){
        if(s[i]=='?'){
            if(ct0>1) s[i] = s[n-i-1] = '0',ct0-=2;
            else s[i] = s[n-i-1] = '1',ct1-=2;
        }
    }

    if(!f || ct0<0 || ct1<0) cout<< -1 <<endl;
    else{
        if(ct0==1)s[(n + 1)/2 - 1] = '0';
        if(ct1==1)s[(n + 1)/2 - 1] = '1';
        cout<< s <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}