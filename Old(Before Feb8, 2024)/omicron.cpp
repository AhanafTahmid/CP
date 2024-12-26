
#include <bits/stdc++.h>
using namespace std;


int main(){
    int t,i;
    cin >> t;
    for(i=1;i<=t;i++){
        int a,b,c,k,f=0;
        cin>>a>>b>>c>>k;
        if(a==b && b==c){
            f=1;
        }
        else{
            a+=k;
            //b-=k;
            c+=k;
            c+=k;
            if(a==b && b==c){
                f=1;
            }

        }
        if(f==1)cout<<"Case "<<i<<": Peaceful"<<endl;
        else if(f==0)cout<<"Case "<<i<<": Fight"<<endl;

    }
    return 0;
    
    
}