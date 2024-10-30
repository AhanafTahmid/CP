#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    if(n%3==0){
        printf("%lld %lld %lld\n",n/3,n/3,n/3);
    }
    else if(n&1){
        printf("%lld %lld %lld\n",1LL,n/2,n-n/2-1);
    }
    else{
        if(n%4==0)printf("%lld %lld %lld\n",n/4,n/4,n/2);
        else printf("%lld %lld %lld\n",2LL,(n-2)/2,(n-2)/2);
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}