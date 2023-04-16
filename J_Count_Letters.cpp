#include <bits/stdc++.h>
using namespace std;
void solve(){
    int fr[1000]={};
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        fr[s[i]]++;
    }
    for(int i=97;i<123;i++){        
        if(fr[i]!=0){
            cout<<char(i)<<" : "<<fr[i]<<endl;
        }
    }

    
    
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}