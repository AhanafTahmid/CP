#include <bits/stdc++.h>
using namespace std;

void solve(){
    char c[10][10];
    map<char, int > mp;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>c[i][j];
            if(c[i][j]!='?')mp[c[i][j]]++;
        }
    }

    for(auto x: mp){
        if(x.second==2)cout<<x.first<<endl;
    }
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}