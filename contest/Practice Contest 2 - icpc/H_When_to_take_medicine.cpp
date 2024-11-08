#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s;cin>>s;
    int y = stoi(s.substr(0, 4)), m = stoi(s.substr(5, 8)), d = stoi(s.substr(8, 10));
    if(y%4==0 && y!=1900 && (m == 1 || m==2) && d&1){
        if(m==1) cout<< (31 - d)/2 + 1 <<endl;
        else if(m==2) cout<< (29 - d)/2 + 1 <<endl;
    }
    else if(y%4==0 && y!=1900 && (m == 1 || m==2) && d%2==0){
        if(m==1) cout<< (31 - d)/2 + 1  <<endl;
        else if(m==2) cout<< (29 - d)/2 + 1 <<endl;
    }
    else if(d&1){
        if(m==1 || m==3 || m==5 ||
        m==7 || m==8 || m==10 || m==12) cout<< (31 - d)/2 + 1  <<endl;
        else cout<< (30 - d)/2 + 1 + 16  <<endl;
    }
    else{
        if(m==1 || m==3 || m==5 ||
        m==7 || m==8 || m==10 || m==12) cout<< (31 - d)/2 + 1 <<endl;
        else cout<< (30 - d)/2 + 1 + 15  <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}