#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int lim = 10000;
unordered_set<int>us;

void cbroot(){
    int v1;
    for(int i=1;i<=lim;i++){
        v1 = (i*i*i);
        us.insert(v1);
    }
}

void solve(){
    cbroot();
    int n;cin>>n;
    int v;
    for(int i=1;i<=n;i++){
        v = i*i*i;
        if(v>n)break;
        else if(us.find(n-v)!=us.end()){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}