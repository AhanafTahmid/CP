#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
bool isfound(char a, char b, char c){
    return (a=='m' && b=='a' && c=='p') || (a=='p' && b=='i' && c=='e');
}
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int ln = s.size();
    int ans = 0;
    for(int i=0;i<ln-2;){
        if(isfound(s[i], s[i+1], s[i+2])) ans++, i+=3;
        else i++;
    }
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}