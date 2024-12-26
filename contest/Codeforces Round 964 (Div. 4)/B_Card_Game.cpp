#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int a1,a2,b1,b2;cin>>a1>>a2>>b1>>b2;
    int ans = 0;
    if(a1>=b1 && a2>=b2 && ((a1==b1 && a2!=b2) || (a1!=b1 && a2==b2) || (a1!=b1 && a2!=b2) )) ans++;
    if(a1>=b2 && a2>=b1 && ((a1==b2 && a2!=b1) || (a1!=b2 && a2==b1) || (a1!=b2 && a2!=b1) )) ans++;
    if(a2>=b1 && a1>=b2 && ((a2==b1 && a1!=b2) || (a2!=b1 && a1==b2) || (a2!=b1 && a1!=b2) )) ans++;
    if(a2>=b2 && a1>=b1 && ((a2==b2 && a1!=b1) || (a2!=b2 && a1==b1) || (a2!=b2 && a1!=b1) )) ans++;
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}