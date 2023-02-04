//
#include <bits/stdc++.h>
using namespace std;
void solve(){
    string a;
    int f=999;
    cin>>a;
    for(int i=0;i<a.size();i++){
        if(a[i]=='c' || a[i]=='o' || a[i]=='d' || a[i]=='e' || a[i]=='f' || a[i]=='r'  ||a[i]=='c' || a[i]=='s'){
            f=1;break;
        }
    }
    if(f==1)cout<<"YES"<<endl;
    else cout<<"N"<<endl;
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}