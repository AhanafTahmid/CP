//
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,i,j,u=0,r=0,f=0;
    string a;
    cin>>n;
    cin>>a;
    for(i=0;i<a.size();i++){
        if(a[i]=='U'){
            u++;
        }
        else if(a[i]=='D'){
            u--;
        }
        else if(a[i]=='L'){
            r--;
        }
        else if(a[i]=='R'){
            r++;
        }
        if(u==1 && r==1){
            f=1;
            break;
        }
    }
    if(f==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}