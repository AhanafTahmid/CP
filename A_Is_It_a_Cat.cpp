#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,i,ct=0;
    string s;
    string nn;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]>=65 && s[i]<=90) s[i]+=32;
    }

    nn.push_back(s[0]);
    for(i=0;i<n-1;i++){
        if(s[i]!=s[i+1]) nn.push_back(s[i+1]);
    }

    
    
    if(nn=="meow") cout<<"YES" <<endl;
    else  cout<<"NO"<<endl;


}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}