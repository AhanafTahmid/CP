#include <bits/stdc++.h>
using namespace std;


int main(){
    int t,i;
    cin >> t;
    for(i=1;i<=t;i++){
        // int ar[100000],k,f=0,j;
        // for(j=0;j<3;j++){
        //     cin>>ar[j];
        // }
        // sort(ar,ar+3);
        // cin>>k;
        // if(ar[0]==ar[1] && ar[1]==ar[2] && ar[0]==ar[2]){
        //     f = 1;
        // }
        // else{
        //     ar[0]+=k;
        //     ar[2]-=k;
        //     if(ar[0]==ar[1] && ar[1]==ar[2] && ar[0]==ar[2]){
        //         f = 1;
        //     }
        // }

        // if(f==1) cout<<"Case "<<i<<": "<<"Peaceful"<<endl;
        // else if(f==0) cout<<"Case "<<i<<": "<<"Fight"<<endl;

        int ar[100000],k,f=0,j,a,b,c;
        cin>>a>>b>>c>>k;

        if(a==b && b==c){
            cout<<"Case "<<i<<": Peaceful"<<endl;
        }
        else{
            cout<<"Case "<<i<<": "<<"Fight"<<endl;
        }

    }
    
    
    return 0;
}