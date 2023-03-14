#include <bits/stdc++.h>
using namespace std;


int main(){

    int n,s=0,nn=0,i,c,avg;
    //cin >> t;
    
    while(1){
        cin>>n;
        if(n==0)break;
        int ar[n+10];
        nn++;
        c=0;
        avg=0;
        s=0;
        for(i=1;i<=n;i++){
            cin>>ar[i];
            s+=ar[i];
        }
        avg=s/n;
        for(i=1;i<=n;i++){
            if(avg < ar[i]){
                c+= ar[i]-avg;
            }
        }
        cout<<"Set #"<<nn<<endl;
        cout<<"The minimum number of moves is "<<c<<"."<<endl<<endl;
    }
    return 0;
}