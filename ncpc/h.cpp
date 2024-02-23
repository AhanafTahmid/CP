#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s;cin>>s;
    string d;cin>>d;
    int ln = s.size();
    int date,month, year; 
    date = (s[0]-'0')*10 + (s[1]-'0');
    month = (s[3]-'0')*10 + (s[4]-'0');
    year = (s[6]-'0')*1000 + (s[7]-'0')*100 +  (s[8]-'0')*10 +  (s[9]-'0')*1;
    cout<< date <<endl;
    cout<< month <<endl;
    cout<< year <<endl;
}


signed main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}