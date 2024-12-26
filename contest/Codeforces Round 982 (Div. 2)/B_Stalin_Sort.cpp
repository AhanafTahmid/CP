#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    int ans = 1e10, ct;
    for(int i=0;i<n;i++){
        ct = 0;
        int last = a[i];
        for(int j=i;j>=0;j--){
            if(last<=a[j])ct++, last = a[j];
            else break;
        }
        for(int j=i+1;j<n;j++){
            if(a[i]>=a[j])ct++;
        }
        ans = min(ans, n - ct);
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