#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n,s1=0,s2=0;
    int i;
    int p[100000];
    cin>>n;
    for(i=1;i<=n;i++){
        int v;
        cin>>v;
        p[v] = i;
    }
    int q;
    cin>>q;
    for(i=1;i<=q;i++){
        int qq;
        cin>>qq;
        s1+=p[qq];
        s2+=(n+1-p[qq]);
    }
    cout<<s1<<" "<<s2<<endl;

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}