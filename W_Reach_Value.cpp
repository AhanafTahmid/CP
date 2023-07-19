#include <bits/stdc++.h>
using namespace std;
long long v = 1;
bool solve(int p,int ar[],int k){
    if(v==ar[k]){
        return 1;
    }
    v = v*10;
    if(v==ar[k]){
        return 1;
    }
    v = v*20;
    if(v==ar[k]){
        return 1;
    }
    cout<<p<<k<<ar[k+3]<<endl;
    if(v>ar[k]){
        k++;
        return 0;
    }
    return solve(p-1,ar,k);
    //cout<<p<<k<<endl;
}

int main(){
    int n;
    cin>>n;
    int ar[1000];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    solve(n,ar,0)==1?cout<<"YES\n":cout<<"NO\n";
    return 0;
}