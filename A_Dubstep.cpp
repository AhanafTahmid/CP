#include <bits/stdc++.h>
using namespace std;
void solve(){
    // string s;
    // cin>>s;
    // int l = s.size();
    // int f=0;
    // for(int i=0;i<l;i++){
    //     if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
    //         i+=2;
    //         f = 1;
    //     }
    //     else{
    //         if(f) cout<<" ";
    //         cout<<s[i];
    //         f = 0;
    //     }
    // }

    string s;
    cin>>s;
    vector<string> ss;
    string st = "";
    for(int i=0;i<s.size();i+=1){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            if(!st.empty())ss.push_back(st);
            st = "";
            i+=2;
        }
        else{
            st+=s[i];
        } 
    }

   
    
        for(auto x: ss){
            cout<<x<<" ";
        }
        cout<<st<<endl;    
    












}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}