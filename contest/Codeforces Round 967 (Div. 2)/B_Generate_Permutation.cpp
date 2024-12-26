#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    if(n&1){
        vector<int>a(n);
        int k = 1;
        for(int i=0;i<n;i+=2)a[i] = k++;
        k = n;
        for(int i=1;i<n;i+=2)a[i] = k--;
        for(auto x: a)cout<< x <<' ';
        cout<<endl;
    }
    else cout<< -1 <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}