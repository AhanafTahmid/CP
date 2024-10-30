#include <bits/stdc++.h>
using namespace std;
int c=0;
void solve(int p,int q,int ar[],long long sum){
    if(c==q){
        cout<<sum;
        return;
    }
    c++;
    sum+=ar[p];
    solve(p-1,q,ar,sum);
}

int main(){
    int n,m,ar[100000];
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>ar[i];
    }
    solve(n,m,ar,0);
    return 0;
}