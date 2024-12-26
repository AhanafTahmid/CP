#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n),b;
    int ans = 2;
    for(int i=0;i<n;i++)cin>>a[i];
    int z = count(a.begin(),a.end(), 0);
    if( z == n) ans = 0;
    else{
        int l = 0, r = n-1;
        while(l<n && a[l]==0)l++;
        while(r>=0 && a[r]==0)r--;
        for(int i=l;i<=r;i++){
            if( a[i] == 0){
                cout<< 2 <<endl;
                return;
            }
        }
        ans = 1;
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