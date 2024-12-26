//
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int i;
    string a,b;
    cin>>a>>b;
    //vector<string>a1,b1;
    for(i=0;i<a.size();i++){
        if(a[i]>=65 && a[i]<=90){
            a[i]+=32;
        }
        if(b[i]>=65 && b[i]<=90){
            b[i]+=32;
        }
    }
    if(a>b)cout<<1<<endl;
    else if(a<b) cout<<-1<<endl;
    else if(a==b) cout<<0<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}