#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n),b;
    for(int i=0;i<n;i++){
        int x;scanf("%1lld",&x);
        a[i] = x;
    }

    for(int i=0;i<n;i++){
        if(i+1<n && a[i]==a[i+1] && a[i]==0){
            continue;
        }
        else{
            b.push_back(a[i]);
        }
    }
    int o = count(b.begin(),b.end(), 1);
    int z = count(b.begin(),b.end(), 0);
    cout<< (o>z?"Yes":"No") <<endl;
}

int32_t main(){
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}