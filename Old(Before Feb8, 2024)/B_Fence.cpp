#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    int ar[300000];
    int p[300000]={};
    for(int i=1;i<=n;i++){
        cin>>ar[i];
        p[i] = p[i-1] + ar[i];
    }

    long long mini = 1e20+7;
    int ans = 1;
    for(int i=1,j=0;i<=n-k+1;i++,j++){        
        if(mini>=(p[k+j]-p[i-1])){
            mini = p[k+j]-p[i-1];
            ans = i;
        }
        //cout<<p[k+j]<<" "<<p[i-1]<<endl;
    }
    cout<<ans<<endl;
    
    
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}