#include <bits/stdc++.h>
using namespace std;
long long s=0;
void solve(int p,int pp,int arr[]){
    if(p==0){
        cout<<fixed<<setprecision(6)<<s/(double)pp<<endl;
        return;
    }
    s+=arr[p];
    solve(p-1,pp,arr);
    //s+=arr[p];
}

int main(){
    int n;
    cin>>n;
    int ar[100000];
    for(int i=1;i<=n;i++){
        cin>>ar[i];
    }
    solve(n,n,ar);
    return 0;
}