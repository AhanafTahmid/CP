#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>ans;
    for(int i=2;i*i<=n;i++){
        int tmp = n, p = 1;
        vector<int> a;
        while(tmp%i==0 && (tmp/i)%i==0){
            a.push_back(i);
            p*=i;
            tmp/=i;
        }
        if(p!=1){
            a.push_back(tmp);
            if(a.size()>ans.size()){
                ans = a;
            }
        }
    }
    if(ans.size()==0){
        cout<< 1 <<endl;
        cout<< n <<endl;
    }
    else{
        cout<< ans.size() <<endl;
        for(auto x: ans)cout<< x << ' ';
        cout<<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}