#include <bits/stdc++.h>
using namespace std;
long long v = -1e18;
int solve(int i, int p,int a[]){
    if(i==p){
        return v;
    }
    if(v<=a[i]){
        v = a[i];
    }
    return solve(i+1,p,a);
}

int main(){
    int n;
    cin>>n;
    int ar[10000];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    cout<<solve(0,n,ar);
    return 0;
}