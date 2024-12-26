#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s;cin>>s;
    int n = s.size();
    int z = count(s.begin(),s.end(),'0');
    if(z == 0){
        cout<< 1 << ' ' << n << ' ' << 1 << ' ' << 1 <<endl;
        return;
    }
    int ct1 = 0, ct0 = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='1')ct1++;
        else break;
    }

    for(int i=ct1;i<n;i++){
        if(s[i]=='1')break;
        else ct0++;
    }

    int v1 = max(1LL, ct1 + 1 - ct0);//move backward
    int v2 = min(ct0, ct1);//min used

    cout<< 1 << ' ' << n << ' ' << v1 << ' ' << n - v2 <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}