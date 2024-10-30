#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s1, s2;cin>>s1>>s2;
    int n1 = s1.size();
    int n2 = s2.size();
    int ln = 0;
    for(int i=0;i<min(n1, n2);i++){
        if(s1[i]==s2[i])ln++;
        else break;
    }
    if(!ln) cout<< n1 + n2 <<endl;
    else cout<< n1 + n2 - ln + 1 <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}