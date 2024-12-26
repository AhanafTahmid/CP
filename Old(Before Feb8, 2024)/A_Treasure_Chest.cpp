#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x,y,t;//chest, key, time
    cin>>x>>y>>t;
    if(x>y)cout<<x<<endl;
    else if(y==x+t)cout<<x+t<<endl;
    else if(y>(x+t)){
        int diff = y-(x+t);
        cout<<diff*2+x+t<<endl;
    }
    else if(y<(x+t)){
        cout<<y<<endl;
    }
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}