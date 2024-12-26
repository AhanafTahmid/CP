#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    string s(n, '3');
    if(n==1 || n==3) cout<< -1 <<endl;
    else if(n%2==0){
        s[n-1] = s[n-2] = '6';
        cout<< s <<endl;
    }
    else{
        s[n-1] = s[n-2] = s[n-4] = '6';
        cout<< s <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}