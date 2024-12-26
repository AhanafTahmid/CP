#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    n+=2;
    vector<int>a;
    int sum = 0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a.push_back(x);
        sum+=x;
    }
    sort(a.begin(),a.end());
    sum-=a.back();

    //last val
    for(int i=0;i<n-1;i++){
        if(sum - a[i] == a.back()){
            for(int j=0;j<n-1;j++){
                if(i==j)continue;
                cout<<a[j]<<" \n"[j==n-2];
            }
            return;
        }
    }

    //2nd last val
    sum-=a[n-2];
    if(sum==a[n-2]){
        for(int i=0;i<n-2;i++){
            cout<<a[i]<<" \n"[i==n-2];
        }
    }
    else cout<< -1 <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}