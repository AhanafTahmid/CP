//
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,i,j;
    cin>>n;
    for(i=n-1;i>=1;i--){
        for(j=i;j>=1;j--){
            cout<<" 1";
        }
        cout<<endl;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
           cout<<"* ";
        }
       cout<<endl;
    }
}

int main(){

    int t=1;
   // cin >> t;
    while(t--)solve(); 
    return 0;
}