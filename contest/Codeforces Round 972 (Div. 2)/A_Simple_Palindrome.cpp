#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    string s = "aeiou", s2 = "";
    int t = n/5;
    int rem = n%5;
    for(int i=0;i<5;i++){
        string tmp(t, s[i]);
        if(rem)s2+=s[i],rem--;
        s2+=tmp;
    }
    if(n<=5){
        for(int i=0;i<n;i++)cout<< s[i];
        cout<<endl;
        return;
    }
    cout<< s2 <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}