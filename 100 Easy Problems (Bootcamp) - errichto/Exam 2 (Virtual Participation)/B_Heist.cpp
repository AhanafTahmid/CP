#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    int n;
    cin>>n;
    vector<int> k(n);
    for(int &i:k)cin>>i;
    sort(k.begin(),k.end());

    int ans = 0;
    for(int i=0;i<n-1;i++){
        ans+=(k[i+1]-k[i]-1);
    }
    cout<< ans <<endl;
}


int main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}