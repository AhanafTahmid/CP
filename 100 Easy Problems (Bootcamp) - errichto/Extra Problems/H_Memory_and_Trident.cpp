#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s;
    cin>>s;
    int ln = s.size();
    int x = 0, y = 0;
    for(int i=0;i<ln;i++){
        if(s[i]=='R') x++;
        else if(s[i]=='L') x--;
        else if(s[i]=='U') y++;
        else if(s[i]=='D') y--;
    }
    if(x==y)cout<< abs(x) <<endl;
    else if(!x && y)cout<<abs(y/2)<<endl;
    else if(!y && x)cout<<abs(x/2)<<endl;
    else cout<< -1 <<endl;
}


signed main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}