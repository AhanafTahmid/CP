#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    if(n==2 || n==3){
        cout<<"NO SOLUTION"<<endl;
        return;
    }
    for(int i=2;i<=n;i+=2){
        cout<<i<<" ";
    }
    for(int j=1;j<=n;j+=2){
        cout<<j<<" ";
    }

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}