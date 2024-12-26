#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s;cin>>s;
    int n = s.size();
    if(!count(s.begin(),s.end(),'0')){
        cout<<n*n<<endl;
    }
    else if(!count(s.begin(),s.end(),'1')){
        cout<<0<<endl;
    }
    else{
        s+=s;
        n = s.size();
        int ans = 0, f = 0, ct = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='1')ct++, f=1;
            else ans = max(ct, ans), ct = 0;
        }
        ans = max(ct, ans);
        int ln = ans;
        int v1 = 1, v2 = ans;
        while(ln--){
            ans = max(v1*v2, ans);
            v1++;
            v2--;
        }
        cout<<ans<<endl;
    }
    
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}


