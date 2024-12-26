#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s;cin>>s;
    int n = s.size();
    int sum = 0;
    int two = 0, three = 0;
    for(int i=0;i<n;i++){
        sum+= s[i] - '0';
        if(s[i]=='2') two++;
        if(s[i]=='3') three++;
    }
    
    bool ok = 0;
    sum%=9;
    if(sum==0) ok = 1;
    else if(sum%2){
        if(sum==1 && ( (three && two) || (two>=4) ))  ok = 1;
        if(sum==3 && ( (three) || (two>=3) ) )  ok = 1;
        if(sum==5 && ( (two>=2) ) )  ok = 1;
        if(sum==7 && ( (two>=1) ) )  ok = 1;
    }
    else if(sum%2==0){
        if(sum==2 && ( (three>=1 && two>=5) || (three>=2 && two>=2) || (two>=8) ))  ok = 1;
        if(sum==4 && ( (three>=1 && two>=4) || (three>=2 && two>=1) || (two>=7) ) )  ok = 1;
        if(sum==6 && ( (three>=1 && two>=3) || (three>=2) || (two>=6) ) )  ok = 1;
        if(sum==8 && ( (three>=1 && two>=2) || (two>=5) ) )  ok = 1;
    }
    
    cout<< (ok?"YES":"NO") <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}