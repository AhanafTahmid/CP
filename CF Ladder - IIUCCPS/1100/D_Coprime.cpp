#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long


void solve(){
    int lim = 1000;
    int n;cin>>n;
    vector<int> v(lim+1, -1);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v[x] = i+1;
    }

    int ans = -1;
    for(int i=1;i<=lim;i++){
        for(int j=i;j<=lim;j++){
            if(v[i]!=-1 && v[j]!=-1){
                if(__gcd(i,j)==1){
                    ans = max(ans, v[i]+v[j]);
                }
            }
            
        }
    }

    cout<< ans <<endl;

    

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}