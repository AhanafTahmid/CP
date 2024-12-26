#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    vector<pair<int, int>> ans;
    for(int i=0;i<n;){
        if(i+1<n){
            if((a[i]==1 && a[i+1]==-1) || (a[i]==-1 && a[i+1]==1)){
                ans.push_back({i+1,i+1});
                ans.push_back({i+2,i+2});
                i+=2;
            }
            else{
                ans.push_back({i+1,i+2});
                i+=2;
            }
        }
        else{
            cout<<-1<<endl;
            return;
        }
    }
    cout<< ans.size() <<endl;
    for(auto [x,y]: ans)cout<< x << ' ' << y <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}


