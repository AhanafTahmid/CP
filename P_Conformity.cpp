#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;
    int fr[600]={};
    while(1){
        
        int n;
        cin>>n;
        if(n==0) break;
        else{
            int a,b,c,d,e;
            
            for(int i=0;i<n;i++){
                cin>>a>>b>>c>>d>>e;
                for(int j=100;j<500;j++){
                    if(a==j){
                        fr[a]++;
                    }
                    else if(b==j){
                        fr[b]++;
                    }
                    else if(c==j){
                        fr[c]++;
                    }
                    else if(d==j){
                        fr[d]++;
                    }
                    else if(e==j){
                        fr[e]++;
                    }
                    //if(fr[j]>0) cout<<fr[j]<<" "<<j<<endl;
                }

                for(int j=100;j<500;j++){
                    if(fr[j]>0) cout<<fr[j]<<" "<<j<<endl;
                }
            }

            //sort(fr,fr+499,greater<int>());
            //cout<<fr[0];
            


        }
    }

    return 0;
}