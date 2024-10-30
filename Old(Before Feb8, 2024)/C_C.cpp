#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long int a,b,c,val=0;
    cin>>a>>b>>c;
    int v1=c-(c/2),v2=c/2;
    val+=a*v1;
    val-=b*v2;
    cout<<val<<endl;
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}