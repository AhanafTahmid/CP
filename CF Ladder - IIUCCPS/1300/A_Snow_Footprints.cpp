#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int st = 0, end = 0, ok = 0, ok2 = 0 , end2 = 0, st2 = 0;
    for(int i=0;i<n;i++){
        char ch;cin>>ch;
        if(ch=='R' && !ok) st = i+1, ok = 1;
        if(ch=='R') end = i+1;
        if(ch=='L' && !ok2) ok2 = 1, end2 = i;
        if(ch=='L') st2 = i+1;
    }
    if(ok2 && ok){
        cout<< st << ' ' << end <<endl;
    }
    else if(!ok2){
        cout<< st << ' ' << end+1 <<endl;
    }
    else{
        cout<< st2 << ' ' << end2 <<endl;
    }
   
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}