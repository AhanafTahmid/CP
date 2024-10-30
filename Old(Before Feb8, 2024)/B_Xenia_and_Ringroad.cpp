#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    int v[100000];
    int ans=0;
    for(int i=0;i<m;i++){
        cin>>v[i];           
    } 

    
    
    for(int i=0;i<m;i++){
        int l=1;
        int s =0;
        if(i>0 && v[i-1]<v[i]){
            //cout<<"d";
            l = v[i-1];
        }
        for(int j=l;j<=n;j++){
            cout<<j<<" "<<v[i]<<endl;
            if(v[i]==j){
                ans+=s;
                break;
            }
            else{
                s++;
                //break;
            }
        }
    }
    cout<<ans<<endl;




    //cout<<ans<<endl;
    
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}