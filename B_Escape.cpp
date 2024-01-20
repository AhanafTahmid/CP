#include <bits/stdc++.h>
using namespace std;

void solve(){
    int vp,vd,t,f,c;
    cin>>vp>>vd>>t>>f>>c;
    long long sd = 0;
    long long sp = 0;
    //int st = 1;

    int vt = 1;
    int j = 0;
    int ss = 0;

    int ans = 0;
    int nn= 0;
    int ff = 0;
    



    while(sp<c){
        sp+=vp;
        //cout<<sp<<endl;
        if(j>t && ss==1){
            ff++;
            if(ff>=f){
                sd+=vd;
                cout<<sd<<endl;
            }
        }

        if(sd>=sp){
            ff = 0;
            ss = 1;
            vt = 1;
            sd = 0;
        }
        cout<<sp<<endl;


        j++;
    }
    
    
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}