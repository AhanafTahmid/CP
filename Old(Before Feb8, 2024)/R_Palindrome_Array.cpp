#include <bits/stdc++.h>
using namespace std;
int solve(int i,int p,int a[]){
    if(p/2<=i){
        return 1;
    }
    if(a[i]!=a[p-1-i]){
        return 0;
    }
    //cout<<i<<p;
    return solve(i+1,p,a);
}

int main(){
    int n;
    cin>>n;
    int ar[100000];
    for(int i=0;i<=n;i++){
        cin>>ar[i];
    }
    solve(0,n,ar)==1?cout<<"YES\n":cout<<"NO\n";
    return 0;
}