#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    vector<int> ss;
    string c="";
    int i= 0;
    while(1){
        c+=s[i];
        if(s[i]=='+'){
            ss.push_back(stoi(c));
            c="";
        }
        else if(s[i]=='\0'){
            ss.push_back(stoi(c));
            break;
        }
        i++;
    }

    sort(ss.begin(),ss.end());
    int l = (i/2);
    for(auto x:ss){
        if(l==0) cout<<x<<endl;
        else{
             cout<<x<<'+';
             l--;
        }
       
    }
}


int main(){

    int t=1;
   // cin >> t;
    while(t--)solve(); 
    return 0;
}