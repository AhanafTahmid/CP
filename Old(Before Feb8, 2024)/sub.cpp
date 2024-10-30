#include <bits/stdc++.h>
using namespace std;
void solve(int i,int p,string sp,string nn){
    if(p==i){
        for(auto ss:nn){
            cout<<ss<<" ";
        }
        if(!nn.size()){
            cout<<"empty";
        }
        cout<<endl;
        return;
    }
    
    nn.push_back(sp[i]);
    solve(i+1,p,sp,nn);
    nn.pop_back();
    solve(i+1,p,sp,nn);
    
}

int main(){
    int n;
    string s;
    cin>>n>>s;
    solve(0,n,s,"");
    return 0;
}