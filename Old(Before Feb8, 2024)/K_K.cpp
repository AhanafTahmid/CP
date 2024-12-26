#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int fr[30]={};
    for(int i=0;i<s.size();i++){
        fr[s[i]-97]++;
        if(fr[s[i]-97]>1){
            cout<<"no"<<endl;
            return;
        }
    }
    cout<<"yes"<<endl;

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}