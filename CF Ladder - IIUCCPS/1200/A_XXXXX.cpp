#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,x;cin>>n>>x;
    vector<int> a(n), p(n);
    for(int &i: a)cin>>i;

    int ans = -1, f = 1, sum = a[0], l = 0, r = 0,ct = 0;

    while(l<n){
        f = 1;
        while(l<n && sum%x!=0){ct++, cout<< l <<' '<<ct <<' '<<sum<<endl, l++;if(l<n)sum+=a[l];f = 0;}
        ans = max(ans, ct);
        if(!f)while(r<n && sum%x==0){
                sum-=a[r];
                r++;
                ct--;
        }
        
        l++;
        cout<<endl<<endl;
    }

    //cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}