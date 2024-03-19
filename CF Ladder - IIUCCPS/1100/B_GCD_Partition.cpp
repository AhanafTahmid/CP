#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long


void solve(){
    int n;cin>>n;
    vector<int>a(n);
    int sum = 0, sum2 = 0;
    for(int &i: a)cin>>i, sum+=i;
    int ans = 1;
    for(int i=0;i<n-1;i++){
        sum-=a[i];
        sum2+=a[i];
        ans = max(gcd(sum, sum2), ans);
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