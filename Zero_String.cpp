//
#include <bits/stdc++.h>
using namespace std;
void solve(){
    string a;
    int i,n,c1=0,c0=0;
    cin>>n;
    cin>>a;
    for(i=0;i<n;i++){
        if(a[i]=='1'){
           c1++; 
        }
        if(a[i]=='0'){
            c0++;
        }
    }
    if(c1==0) cout<<0<<endl;
    else if(c1==n) cout<<1<<endl;
    else if(c1>c0)cout<<c0+1<<endl;
    else if(c1<c0)cout<<c1<<endl;
    else cout<<c0<<endl;

}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}