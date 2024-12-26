#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int ans = 0, ssum = -1;
    for(int i=2;i<=n;i++){
        int sum = 0;
        for(int j=i;j<=n;j+=i){
            sum+=j;
        }
        if(sum>ssum){
            ssum = sum;
            ans = i;
        }
    }
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}