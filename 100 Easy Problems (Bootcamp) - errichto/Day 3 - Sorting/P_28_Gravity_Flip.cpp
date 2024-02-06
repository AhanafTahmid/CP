#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int &i:a)cin>>i;
    sort(a.begin(),a.end());
    for(int x: a)cout<< x <<" ";
    cout<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}