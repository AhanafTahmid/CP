#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long int n,i;
    cin>>n;
    for(i=2;i*i<=n;i++){
        if(n%i==0){
            cout <<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}