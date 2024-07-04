#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s;cin>>s;
    int n = s.size();
    int ans = 0;
    for(int i=0;i<n;i++){
        if(i+1<n && i-1>=0 && s[i]==s[i+1] && s[i]==s[i-1] && s[i]!='-' && s[i+1]!='-' && s[i-1]!='-'){
            s[i] = '-';
            ans++;
        }
        else if(i+1<n && i-2>=0 && s[i]==s[i+1] && s[i]==s[i-2] && s[i]!='-' && s[i+1]!='-' && s[i-2]!='-'){
            s[i] = '-';
            ans++;
        }
        else if(i+2<n && i-1>=0 && s[i]==s[i+2] && s[i]==s[i-1] && s[i]!='-' && s[i+2]!='-' && s[i-1]!='-'){
            s[i] = '-';
            ans++;
        }
        else if(i+1<n && s[i]==s[i+1] && s[i]!='-' && s[i+1]!='-'){
            s[i+1] = '-'; 
            ans++;
        }
        else if(i+1<n && i-1>=0 && s[i+1]==s[i-1] && s[i+1]!='-' && s[i-1]!='-'){
            s[i+1] = '-';
            ans++;
        }
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