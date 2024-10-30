#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    int n;
    cin>>n;
    int ans = 0;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        ans = x^ans;
        //cout<< x <<" = " <<ans <<endl;
    }
    cout<< ans <<endl;
}


int main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}