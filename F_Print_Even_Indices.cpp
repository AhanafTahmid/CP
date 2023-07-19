#include <bits/stdc++.h>
using namespace std;
int solve(int p,int ar[],int i, int j){
    if(p%2==0){
        if(i==p/2){
            return 0;
        }
        solve(p,ar[p-i-j],i-1,j-1);
        
    }
    return ar[p-i-j];
}

int main(){
    int n;
    cin>>n;
    int ar[1000];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    cout<<solve(n,ar,1,0);
    return 0;
}