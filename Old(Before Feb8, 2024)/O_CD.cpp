#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    
    while(1){
        int a,b;
        cin>>a>>b;
        if(a==0 && b==0) break;
        else{
            int c=0;
            //int ar[a+2],ar2[b+2],val[a+b];
            map<int,int> val;
            //int val[100000];
            for(int i=1;i<=a;i++){
                int x;
                cin>>x;
                val[x]=1;
            }
            for(int i=1;i<=b;i++){
                int y;
                cin>>y;
                if(1==val[y]) c++;
            }
            
            cout<<c<<endl;


        }
    }

    return 0;
}