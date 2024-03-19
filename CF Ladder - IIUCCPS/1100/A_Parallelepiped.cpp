#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int s1,s2,s3;cin>>s1>>s2>>s3;
    int ans = 4 * (sqrt((s1*s3)/s2) + sqrt((s1*s2)/s3) + sqrt((s2*s3)/s1));
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}