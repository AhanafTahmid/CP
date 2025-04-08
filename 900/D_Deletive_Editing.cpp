#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s1, s2;cin>>s1>>s2;
    vector<char> f(26);
    for(char ch: s2) f[ch-'A']++;
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());    
    string s3 = "";

    for(char ch:s1){
        if( f[ch-'A'] > 0){
            s3+= ch;
            f[ch-'A']--;
        }
    }

    cout << ((s3 == s2)?"YES":"NO") << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}