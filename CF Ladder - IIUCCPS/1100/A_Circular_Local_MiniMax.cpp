#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int &i: a)cin>>i;
    sort(a.begin(),a.end());
    if(n&1){
        cout<<"NO"<<endl;
        return;
    }
    vector<int> b;
    for(int i=0;i<n/2;i++){
        b.push_back(a[i]);
        b.push_back(a[n/2+i]);
    }

    int f = 0;
    if(!((b[n-1]>b[n-2] && b[n-1]>b[0]) || (b[n-1]<b[n-2] && b[n-1]<b[0]))){
        cout<<"NO"<<endl;
        return;
    }

    if(!((b[0]>b[n-1] && b[0]>b[1]) || (b[0]<b[n-1] && b[0]<b[1]))){
        cout<<"NO"<<endl;
        return;
    }

    for(int i=1;i<n-1;i++){
        if((b[i]>b[i+1] && b[i]>b[i-1]) || (b[i]<b[i+1] && b[i]<b[i-1]) )continue;
        else{
            f = 1;
            break;
        }
    }
    if(f){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        for(auto x: b)cout<<x<<" ";
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