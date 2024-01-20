#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long a,b;
    cin>>a>>b;
    (a+b)%2?cout<<"Alice"<<endl:cout<<"Bob"<<endl;
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}