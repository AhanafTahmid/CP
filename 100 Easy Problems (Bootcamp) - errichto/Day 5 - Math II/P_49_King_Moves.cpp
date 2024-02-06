#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    string s;
    cin>>s;
    if((s[0]>='b' && s[0]<='g') && (s[1]>='2' && s[1]<='7')) cout<< 8 <<endl;
    else if( s=="a1" || s=="a8" || s=="h1" || s=="h8") cout<< 3 <<endl;
    else cout<< 5 <<endl;
}


int main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}