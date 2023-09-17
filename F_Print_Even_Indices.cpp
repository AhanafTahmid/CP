#include <bits/stdc++.h>
using namespace std;
void solve(int p,int ar[],int i,int j){
    //if p is even size
    if(p%2==0){
        if(i>p){
            return;
        }
        cout<<ar[p-i]<<" ";
        solve(p,ar,i+2,j);
    }

    //if p is odd size
    else{
        if(j>p){
            return;
        }
        cout<<ar[p-j]<<" ";
        solve(p,ar,i,j+2);
    }

    
}

int main(){
    int n;
    cin>>n;
    int ar[1000];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    solve(n,ar,2,1);
    return 0;
}