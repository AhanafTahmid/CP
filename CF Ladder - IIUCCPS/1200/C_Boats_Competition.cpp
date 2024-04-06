#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    sort(a.begin(),a.end());
    int st = a[0] + ((n>1)? a[1] : 0);
    int end = a.back() + ((n>1)? a[n-2] : 0);
    
    int ans = 0;
    for(int i=st;i<=end;i++){
        int l = 0, r = n - 1, v, ct = 0;
        while(l<r){
            v = a[l] + a[r];
            if(v==i){
                ct++;
                l++;
                r--;
            }
            else if(v>i)r--;
            else l++;
        }
        ans = max(ans, ct);
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