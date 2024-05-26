#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s;cin>>s;
    set<char>st(s.begin(),s.end());
    if(st.size()==1)cout<<"NO"<<endl;
    else{
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i]!=s[i+1]){
                swap(s[i],s[i+1]);
                break;
            }
        }
        cout<<"YES"<<endl;
        cout<< s <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}