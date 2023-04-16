#include <bits/stdc++.h>
using namespace std;
void solve(){
   int n;
   cin>>n;
   int ar[105];
   for(int i=0;i<n;i++){
        cin>>ar[i];
   }

   for(int i=0;i<n;i++){
        if(ar[i]%2==0) cout<<ar[i]<<" ";
   }


}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}