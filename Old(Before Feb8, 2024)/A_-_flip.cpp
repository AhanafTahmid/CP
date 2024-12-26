#include <bits/stdc++.h>
using namespace std;
void solve(){
    string a;
    int i;
    cin>>a;
    for(i=1;i<=a.size();i++){
        if(a[i]=='0'){
            a[i]='1';
            //cout<<"hhh"<<endl;
        }
        else if(a[i]=='1'){
           // cout<<"hhh"<<endl;
            a[i]='0';
        }
    }
    cout<<a<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}