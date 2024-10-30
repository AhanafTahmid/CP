#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    int r, g , b;
    cin>> r >> g >> b;
    vector<int>a;
    a.push_back(r);
    a.push_back(g);
    a.push_back(b);
    sort(a.begin(),a.end());
    if(r==g && g==b && b==r) cout<<"Yes"<<endl;
    else if(a[0]+a[1]+1>=a[2]) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}