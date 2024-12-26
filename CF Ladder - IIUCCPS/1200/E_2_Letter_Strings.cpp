#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<map<string, int> > v(30);
    map<string, int> tmp;
    for(int i=0;i<n;i++){
        string s;cin>>s;
        tmp[s]++;
        v[s[0]-'a'][s] = tmp[s];
    }    
    
    int ans = 0;
    for(int i=0;i<26;i++){
        if(!v[i].empty()){
            for(auto [x,y]: v[i]){
                cout<< x <<' ' << y <<endl;
            }
        }
        cout<<endl<<endl;
    }

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}