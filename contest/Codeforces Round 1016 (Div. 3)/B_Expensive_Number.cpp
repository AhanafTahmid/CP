#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s;cin>>s;
    int z = count(s.begin(),s.end(),'0');
    int n = s.size(), ans = 0;
    if( z == 0) ans = n-1;
    else{
        int l = 0;
        for(int i=n-1;i>=0;i--){
            if(s[i] != '0'){
                l = i;
                break;
            }
        }
        z = count(s.begin(),s.begin()+l,'0');
        ans = n - z - 1;
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