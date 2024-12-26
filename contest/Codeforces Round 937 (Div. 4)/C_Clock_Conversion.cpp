#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s;cin>>s;
    int h = (s[0]-'0')*10 + s[1]-'0';
    int m = (s[3]-'0')*10 + s[4]-'0';
    if(h>=12 && h<=23){
        if(h!=12)h=h%12;
        if(h>=0 && h<=9)cout<<'0';
        cout<<h<<":"<<s[3]<<s[4]<<" "<<"PM\n";
    }
    else{
        if(h>=1 && h<=9)cout<<'0';
        if(h==0) h = 12;
        cout<<h<<":"<<s[3]<<s[4]<<" "<<"AM\n";
    }

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}