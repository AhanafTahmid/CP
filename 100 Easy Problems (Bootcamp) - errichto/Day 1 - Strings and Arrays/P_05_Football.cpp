#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int len = s.size();
    int ct = 0, ct2=0;
    for(int i=0;i<len;i++){
        if(s[i]=='0')ct++,ct2=0;
        else ct2++,ct=0;

        if(ct==7 || ct2==7){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}