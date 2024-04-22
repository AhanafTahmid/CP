#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int &i: a)cin>>i;
    int ct = 0;
    if(is_sorted(a.begin(),a.end())) cout<< 0 <<endl;
    else{
        int l = 0;
        for(int i=n-1;i>=0;i--){
            if(i-1>=0 && a[i]>=a[i-1])continue;
            else{
                l = i;
                break;
            }
        }
        rotate(a.begin(),a.begin()+l,a.end());
        if(is_sorted(a.begin(),a.end())) cout<< n - l <<endl;
        else cout<< -1 <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}