#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    int l = 0, r = n-1;
    int s1 = a[l], s2 = a[r];
    int ans = 0,ct = 0;
    while(l<r){
        if(s1>s2)r--,s2+=a[r];
        else if(s1<s2)l++,s1+=a[l];
        else if(s1==s2) ans = max(ans, l+1 + (n-r)),l++,r--,s1+=a[l],s2+=a[r];
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