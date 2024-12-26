#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    string s;cin>>s;

    if(s[0]==s[1]){
        cout<< s[0]<< s[1]  <<endl;
    }
    else{
        string ans = "";
        int i;
        for(i=0;i<n-1;i++){
            if(s[i]>=s[i+1])ans+=s[i];
            else break;
        }
        ans+=s[i];
        cout<< ans + string(ans.rbegin(),ans.rend()) <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}