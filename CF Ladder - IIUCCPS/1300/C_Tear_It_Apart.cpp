#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s;cin>>s;
    int n = s.size();
    int dis = 1e10;
    for(int j=0;j<26;j++){
        int now = 0;
        int d = 0;
        char ch = j + 'a';
        string t = s + ch;
        for(int i=0;i<=n;i++){
            if(t[i]==ch) d = max(i - now, d), now = i+1;
        }
        dis = min(d, dis); 
    }

    cout<< (dis==0?0:floor(log2(dis)) + 1) <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}