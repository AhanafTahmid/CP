#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s1,s2;
    cin>>s1>>s2;
    int ll = s1.size()>=s2.size()?s1.size():s2.size();
    for(int i=0;i<ll;i++){
        if(i<s1.size()){
            cout<<s1[i];
        }
        if(i<s2.size()){
            cout<<s2[i];
        }

    }
    cout<<endl;
}


int main(){

    int t=1;
    cin >>t;
    while(t--)solve(); 
    return 0;
}