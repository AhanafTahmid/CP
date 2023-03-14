#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c,ct=0;
    cin>>a>>b>>c;
    int ar[5]={a,b,c};
    if(a==b && b==c){
        cout<<0<<endl;
        return;
    }
    else if(a!=b && b!=c && a!=c){
        cout<<-1<<endl;
        return;
    }
    int x = 3*((b+c)/2)-a-b-c;
    cout<<x<<endl;
    
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}