#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    int n;
    cin>> n;
    string tmp = "GBIV";
    string ans = "ROY";
    for(int i=0;i<n;i++){
        ans+=tmp;
    }

    for(int i=0;i<n;i++){
        cout<< ans[i];
    }
    cout<<endl;
}


int main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}