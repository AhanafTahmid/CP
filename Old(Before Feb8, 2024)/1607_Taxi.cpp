//
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int p,pa,t,ta;
    cin>>p>>pa>>t>>ta;
    int f = 0;
    if(p==t){
        cout<<p<<endl;
        return;
    }
    while(p<t){
        p+=pa;
        if(p>=t){
            break;
        }
        t-=ta;
    }
    cout<<t<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}