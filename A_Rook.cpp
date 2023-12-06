#include <bits/stdc++.h>
using namespace std;
void solve(){ 

    string s="0abcdefgh";
    string inp;
    cin>>inp;
    string ss = "";
    int board[100][100]={};
    for(int i=1;i<=8;i++){
        for(int j=1;j<=8;j++){
            ss="";
            ss+=(s[j]+to_string(i));
            if(ss==inp) continue;
            else if(ss[1]==inp[1]) cout<<ss<<endl;
            else if(ss[0]==inp[0]) cout<<ss<<endl;
        }
    }
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}