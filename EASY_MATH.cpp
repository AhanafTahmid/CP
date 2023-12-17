#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,m,a,d,c=0;
    cin>>n>>m>>a>>d;
    // for(ll x=n;x<=(m/2);x++){
    //     if((x%a)==0)continue;
    //     else if((x%(a+d))==0 || (x%(a+2*d))==0 || (x%(a+3*d))==0 || (x%(a+4*d))==0)continue;
    //     c++;
    // }
    // if(m%2==0) cout<<c+c-1;
    // else cout<<c+c<<endl;


    int total = m-n+1;
    int other = 0;
    //total - all possible baad(other) = answer
    //generating all possible subsets
    int v[100]={a,a+d,a+2*d,a+3*d,a+4*d};
    //31 subsets will be here
    int subsets = (1<<5)-1;//10000
    string ccc = "";
    ll sum = 1;
    int ghura = 0;
    for(int i=1;i<=subsets;i++){
        ccc="";
        sum = 1;
        ghura = 0;
        for(int k=0;k<5;k++){
            
            if(i&(1<<k)){
                ccc+=(v[k]+'0');  
                sum*=v[k];    //k left shift er man 
                //cout<<v[k];
                ghura++;
            }
        }

        //cout<<total/sum<<" "<<ccc<<endl;

        //if(ghura%2==1){ other+=(total/sum);cout<<other<<" odd"<<endl;}
        //else {other-=(total/sum);cout<<other<<" even"<<endl;}

        cout<<ccc;
        //cout<<sum;


        cout<<endl;
    }
    ///cout<<total - other<<endl;
    
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}