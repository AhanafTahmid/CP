#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    set<int>st(a.begin(),a.end());
    if(st.size()==1){
        cout<<"NO"<<endl;
        return;
    }
    int b = -1;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            b = i+1;
            break;
        }
    }
    if(b==-1)b=n-1;
    
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++){
        if(b==i)cout<<'B';
        else cout<<'R';
    }
    cout<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}