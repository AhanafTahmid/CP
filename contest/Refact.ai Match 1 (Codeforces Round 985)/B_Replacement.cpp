#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    string s, r;cin>>s>>r;
    vector<char>a;
    int j = 0;
    for(int i=0;i<n;i++){
        a.push_back(s[i]);
        while(a.size()>=2 && a[a.size() - 1] != a[a.size() - 2]){
            a.pop_back();
            a.pop_back();
            a.push_back(r[j++]);
        }
    }

    cout<< (a.size()==1 && j + 1 ==n ? "YES": "NO") <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}