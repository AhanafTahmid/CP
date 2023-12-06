#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,t,k,d;
    cin>>n>>t>>k>>d;
    int p;
    int nn = n;
    int t1 = 0;
    int t2 = 0;
    if(n<=k){
        cout<<"NO"<<endl;
        return;
    }
    //for single oven
    while(n>0){
        p = n-k;
        n = p;
        t1 += t;
    }
    int pp=0;
    int actual = 0;
    while(1){
        t2+=t;
        pp = nn - k;
        nn = pp;
        if(t2>=d){
            //cout<<nn<<" "<<t2<<endl;
            pp = nn - k;
            nn = pp;
           
            t2+=min(t2,d);//between 6 and 5
            //cout<<t2;
        }
        actual = max(t2,actual);
        t2 = actual;
        if(nn<=0){
            cout<<actual<<endl;
            break;
        }
        //cout<<nn<<"-"<<k<<"="<<pp<<endl<<"t: "<<t2<<endl;
    }
    //if(t1>t2) cout<<"YES"<<endl;
    //else cout<<"NO"<<endl;
    //cout<<t1<<" "<<t2<<endl;
    
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}