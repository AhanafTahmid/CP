#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n),b(n);
    for(int &i: a)cin>>i;
    int z = 0, o = 0;
    for(int &i: b){
        cin>>i;
        if(i==0)z++;
        else o++;
    }
    if(!is_sorted(a.begin(),a.end()) && (!z || !o))cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}