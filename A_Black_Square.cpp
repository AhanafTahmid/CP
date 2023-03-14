#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c,d,s=0;
    string ar;
    cin>>a>>b>>c>>d;
    cin>>ar;
    for(int i=1;i<=ar.size();i++){
        if(ar[i]==('0'+a))  s+=a;
        else if(ar[i]==('0'+b)) s+=b;
        else if(ar[i]==('0'+c)) s+=c;
        else if(ar[i]==('0'+d)) s+=d;

    }   
    cout<<s<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}