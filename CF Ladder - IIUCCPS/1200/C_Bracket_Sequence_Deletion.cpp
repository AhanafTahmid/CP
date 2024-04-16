#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int ct = 0, f = 1, l = 0;
    
    for(int i=0;i<n;){       
        //always 2 size
        if(i+1<n && f==1 && ( (s[i]=='(' && s[i+1]==')') || s[i]==s[i+1]) ){
            ct++;
            l = i + 2;
            i+=2;
        }
        else if( i!=l && s[l] == s[i] ){
            ct++;
            f = 1;
            l = i + 1;
            i++;
        }
        else f = 0, i++;
    }
    cout<< ct << ' ' << s.size() - l <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}