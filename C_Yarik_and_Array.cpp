#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int ar[n+1];
    for(int i=1;i<=n;i++){
        cin>>ar[i];
    }

    int ans = INT_MIN;
    long long sum = 0;
    for(int i=1;i<=n;i++){
        sum+=ar[i];
        //if(ans<sum) ans = sum;
        ans = max(1LL*ans,sum);
        //checkpoint of 2 same consecutive
        if((i<=n-1 && abs(ar[i])%2==0 && abs(ar[i+1])%2==0) || (i<=n-1 && abs(ar[i])%2==1 && abs(ar[i+1])%2==1)){
            sum = 0;
        }
        if(sum<0) sum = 0;

    }
    
    cout<<ans<<endl;

    
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}