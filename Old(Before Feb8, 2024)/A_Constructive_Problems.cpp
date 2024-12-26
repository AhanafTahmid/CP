#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int ans = 0;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        ans=max(x,y);
        cout<<ans<<endl;
    }
    
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}