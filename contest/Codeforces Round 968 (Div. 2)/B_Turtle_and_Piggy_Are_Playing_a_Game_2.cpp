#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    sort(a.begin(),a.end());
    int l = 0, r = n-1, mx = 0, mn = 0, ct = 1;
    while(l<r){
        if(ct&1){
            mx = max(a[l], a[l+1]);
            l++;
            if(l==r){
                cout<< mx <<endl;
                return;
            }
        }
        else{
            mn = min(a[r], a[r-1]);
            r--;
            if(l==r){
                cout<< mn <<endl;
                return;
            }
        }
        ct++;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}