#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s;cin>>s;
    int n = s.size();
    int sum = 0;
    int indx = 0;
    int f = 0;
    for(int i=0;i<n-1;i++){
        sum = s[i]-'0' + s[i+1]-'0';
        if(sum>=10){
            indx = i;
            f = 1;
        }
    }
    if(f){
        cout<<s.substr(0, indx)<<s[indx]-'0' + s[indx+1]-'0'<<s.substr(indx+2, n)<<endl;
    }
    else{
        cout<< s[0]-'0' + s[1]-'0'<<s.substr(2)<<endl;
    }
    
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}