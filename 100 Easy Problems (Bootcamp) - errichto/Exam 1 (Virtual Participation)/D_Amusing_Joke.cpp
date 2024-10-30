#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    string g, h , p;
    cin>> g >> h >> p;
    string cm = g+h;
    sort(cm.begin(),cm.end());
    sort(p.begin(),p.end());
    if(cm==p) cout<<"YES"<<endl;
    else cout<< "NO" << endl;

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}