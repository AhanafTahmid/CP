#include <bits/stdc++.h>
using namespace std;
void solve(){
    string n;
    cin>>n;
    int l = n.size();
    int f =0;
    int c=0;
    for(int i=0;i<l;i++){
        if(n[i]=='4' || n[i]=='7'){
            f++;
            c =1;
        }
    }
    if((f==4 || f==7 || f==44 || f == 47 || f==74) && c) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}