//
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,ar[10050],i,f=0;
    cin>>n;
    int fr[n+2]={};
    for(i=1;i<=n;i++){
        cin>>ar[i];
    }
    for(i=1;i<=n;i++){
        fr[ar[i]]++;
        if(fr[ar[i]]>1){
            f = 1;break;
        };
    }
    if(f==1){
        cout<<"ne krasivo"<<endl;
    }
    else cout<<"prekrasnyy"<<endl;
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}