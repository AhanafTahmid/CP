#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int l = s.size();
    int c=1;
    for(int i=0;i<l;i++){
        if(s[i]=='?' && c%2){
            s[i]='(';
            c++;
        }
        else if(s[i]=='?' && !(c%2)){
            s[i]=')';
            c++;
        }
    }
    // int f =0;
    // stack<char> ss;
    // for(auto ch:s){
    //     if(ch==')' && ss.empty()){
    //         f =1;
    //         break;
    //     }
    //     else if(ch=='(') ss.push(ch);
    //     else if(!ss.empty() && ch==')'){
    //         ss.pop();
    //     }  
    // }
    //cout<<ss.size()<<endl;
    //if(f || ss.size())cout<<"NO"<<endl;
    //else cout<<"YES"<<endl;
    //if(f && ss.siz) cout<<"no"<<endl;
    //else cout<<"yes"<<endl;
   
    if(!(l%2) && s[0]=='(' && s[l-1]==')') cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}