#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int ar[n+1];
    int ct8 = 0;
    for(int i=0;i<n;i++){
        scanf("%1d",&ar[i]);
        if(ar[i]==8)ct8++;
    }

    int ntimes = n/11;
    if(ct8>=ntimes) cout<< ntimes <<endl;
    else if(ct8)cout<<ct8<<endl;
    else cout<< 0 <<endl;

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}