#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n),b(n),c(n);
    for(int i=0;i<n;i++) c[i] = i;
    a = c;
    reverse(a.begin(),a.end());
    if(n%2==0){
        cout<<-1<<endl;
        return;
    }
    int m = n/2;
    for(int i=0;i<m;i++){
        b[i] = n + c[i] - a[i];
    }
    for(int i=m;i<n;i++){
        b[i] = c[i] - a[i];
    }

    for(int i=0;i<n;i++)cout<< a[i] << " \n"[i==n-1];
    for(int i=0;i<n;i++)cout<< b[i] << " \n"[i==n-1];
    for(int i=0;i<n;i++)cout<< c[i] << " \n"[i==n-1];
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}