#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long int n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1){ 
        if(n%2==0){
            n=n/2;
            cout<<n<<" ";
        }
        else if(n%2!=0){
            n=(n*3)+1;
            cout<<n<<" ";
        }

    }
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}