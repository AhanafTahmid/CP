#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> o;
    vector<int> e;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        if(x%2==1)o.push_back(x);
        else if(x%2==0)e.push_back(x);
    }
    if(o.size()%2==0 && e.size()%2==0)cout<<"YES"<<endl;
    else{
        sort(o.begin(),o.end());
        sort(e.begin(),e.end());
        if(o.back()<*e.begin()){
            if(abs(o.back()-*e.begin())==1)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else{
            if(abs(e.back()-*o.begin())==1)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}