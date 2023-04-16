#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,m=0,b=0;
    cin>>n;
    int ar[10000];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    for(int i=0;i<n;i++){
        if(ar[i]%2==0) m+=ar[i];
        else b+=ar[i];
    }
    if(m>b) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}