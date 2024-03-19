#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int target;cin>>target;
    map<int, int> mp;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        mp[x] = 1;//if x itself is 0 then it will not work, that's why put 1 here
        a[i] = x;
    }

    for(int i=0;i<n;i++){
        //cout<< a[i] <<" = "<<mp[a[i]+target]<<endl;
        if(mp[a[i]+target]!=0){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}


int32_t main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}