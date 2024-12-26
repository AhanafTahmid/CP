#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    int s = 0, s2 = 0, s3 = 0, t1 = 0, t2 = 0;
    for(int i=0;i<n;i++)cin>>a[i],s+=a[i];
    for(int i=0;i<n;i+=2){
        s2+= a[i];
        t1++;
    }
    for(int i=1;i<n;i+=2){
        s3+= a[i];
        t2++;
    }
    for(int i=0;i<n;i+=2){
        if(s2%t1==0)a[i] = s2/t1;
    }
    for(int i=1;i<n;i+=2){
        if(s3%t2==0)a[i] = s3/t2;
    }
    sort(a.begin(),a.end());
    if(a[0] == a[n-1])cout<< "YES" <<endl;
    else cout<< "NO" <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}