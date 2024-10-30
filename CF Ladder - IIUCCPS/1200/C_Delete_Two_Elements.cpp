#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    int ans = 0, ct = 0, ct1 = 0;
    int sum = 0, mean;
    for(int &i: a)cin>>i, sum+=i;
    mean = sum/n;
    sort(a.begin(),a.end());
    
    int k = 0;
    for(int i=n-1;i>=0;i--){
        if(mean==a[i]) ct1++;
        else {k = i; break;}
    }
    ans = (ct1 * (ct1-1))/2;
    int l = 0, r = k;
    while(l<r){
        int v = a[l]+a[r];
        cout<< sum - v << ' ' << sum <<endl;
        if(v==mean+mean)l++,r--,ans++;
        else if(v>mean)r--;
        else l++;
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