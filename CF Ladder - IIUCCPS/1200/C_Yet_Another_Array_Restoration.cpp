#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int x,y;cin>>x>>y;
    int indx;
    for(int i=1;i<=50;i++){
        if( ((y-x)%i==0) && ((y-x-1)/i)+ 2 <= n){
            indx = i;
            break;
        }
    }
    vector<int> ans{x,y};
    for(int i=x+indx;i<y;i+=indx){
        ans.push_back(i);
        if(ans.size()==n)break;
    }

    if(ans.size()!=n){
        for(int i=x-indx;i>0;i-=indx){
            ans.push_back(i);
            if(ans.size()==n)break;
        }
    }

    if(ans.size()!=n){
        for(int i=y+indx;1;i+=indx){
            ans.push_back(i);
            if(ans.size()==n)break;
        }
    }
    for(int i=0;i<n;i++)cout<< ans[i]<<" \n"[i==n-1];
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}