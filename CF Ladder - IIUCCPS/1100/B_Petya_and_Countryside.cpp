#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int &i: a)cin>>i;
    int ans = 1, j, ct;
    for(int i=0;i<n;i++){
        ct = 1;
        j = i;
        while(j<n){
            if(j+1<n && a[j]>=a[j+1])ct++,j++;
            else break;
        }
        j = i;
        while(j>=0){
            if(j-1>=0 && a[j]>=a[j-1])ct++,j--;
            else break;
        }
        ans = max(ct, ans);
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