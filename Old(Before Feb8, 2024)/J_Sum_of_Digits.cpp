#include <bits/stdc++.h>
using namespace std;
void solve(){
    string val;
    cin>>val;
    string str2 = val;
    int s;
    int c = 0;
    if(str2.size()==1){
        cout<<c<<endl;
    }
    else{
        while(str2.size()>1){
            s=0;
            for(int i=0;i<str2.size();i++){
                s+=str2[i]-'0';
                //cout<<s<<endl;
            }
            //cout<<s<<endl;
            str2 = to_string(s);
            c++;
        }
        cout<<c<<endl;
    }
    
    
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}