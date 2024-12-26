#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c,d,s=0;
    string ar;
    cin>>a>>b>>c>>d;

    cin>>ar;
    for(int i=0;i<ar.size();i++){
        if(ar[i]=='1')      s+=a;
        else if(ar[i]=='2') s+=b;
        else if(ar[i]=='3') s+=c;
        else if(ar[i]=='4') s+=d;
        //cout<<s<<endl;

    }   
    cout<<s<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}