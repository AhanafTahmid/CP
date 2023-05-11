#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int l = s.size();
    string s1 = "hello";
    int c = 0;
    for(int i=0,j=0;i<l;i++){
        if(s[i]==s1[j]){
            j++;
            c++;
        }
    }
    if(c==5) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}