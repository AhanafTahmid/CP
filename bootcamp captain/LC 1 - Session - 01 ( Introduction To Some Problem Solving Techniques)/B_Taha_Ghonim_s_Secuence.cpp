#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void two_pointer(int ar[], int n){
    int l = 0, r = n-1;
    while(l<r){
        cout<<ar[l]<<" "<<ar[r]<<" ";
        l++,r--;
    }
    if(n%2)cout<<ar[l];
    cout<<endl;
}

void solve(){
    int n;cin>>n;
    int ar[n+1];
    for(int i=0;i<n;i++)cin>>ar[i];
    two_pointer(ar, n);
}


signed main(){
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}