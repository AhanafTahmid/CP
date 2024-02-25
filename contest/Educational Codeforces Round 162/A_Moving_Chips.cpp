#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int &i:a)cin>>i;
    int st = 0, end = 0, ans = 0;
    int f = 0;
    for(int i=0;i<n;i++){
        if(a[i]==0 && f==0) st = i,f=1;
        else if(a[i]==0 && f==1) end = i;
        else if(a[i]==1){
            if(st!=0 && end!=n-1){
                if(st && !end) ans++;
                else if(!st && end) ans++;
                else ans+=(end-st+1);
            }
            st = 0;
            end = 0;
            f = 0;
        }
    }
    cout<< ans <<endl;
}


signed main(){
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}