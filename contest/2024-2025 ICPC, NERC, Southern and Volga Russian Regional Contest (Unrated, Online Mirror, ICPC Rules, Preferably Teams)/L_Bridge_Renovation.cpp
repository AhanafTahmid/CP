#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int v = 0, ct = 0, ans = 0, ct2 = 0;
    while(1){
        v+=25;
        ct++;
        if(v==50) ans++, v = 0;
        if(ct==n)break;
    }

    //cout<< ans <<endl;

    if(v==25) ans++, v = 0, ct = 1;

    while(1){
        if(ct>=n)break;
        v+=60;
        ct+=2;
        ct2+=1;
        ans++;
        v = 0;
    }
    
    while(1){
        if(ct2>=n)break;
        v+=60;
        ct2+=3;
        ans++;
        v = 0;
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