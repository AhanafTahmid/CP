#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    if(n==1) cout<< -1 <<endl;
    else if(n%2==0){
        for(int i=1;i<=n/2;i++){
            cout<< i << ' ' << i << " \n"[i==n/2];
        }
    }
    else{
        if( n<=25 ) cout<< -1 <<endl;
        else{
            vector<int>a{1, 2, 2, 3, 3, 4, 4, 5, 5, 1, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 13, 13, 1, 12};
            int sz = n - 27;
            for(int x: a) cout<< x << ' ';
            for(int i=1;i<=sz/2;i++){
                cout<< i+13 << ' ' << i+13 << ' ';
            }
            cout<<endl;
        }
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}