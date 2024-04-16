#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    int ans = 0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        b[i] = x;
        if(i && i!=n-1){
            if(x%2==0){
                ans+= (x/2) - 1;
                x = 2;
            }
            else{
                ans+=(x/2);
                x = 1;
            }
        }
        a[i] = x;
    }
    
    int ok = count(b.begin()+1,b.end()-1,1);
    if(ok==n-2 || (n==3 && b[1]%2)) cout<< -1 <<endl;
    else cout<< ans + (n-1 - 1) <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}