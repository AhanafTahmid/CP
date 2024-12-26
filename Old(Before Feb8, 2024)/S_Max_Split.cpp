#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int c1=0,c2=0,d1=0;
    int l = s.size();
    for(int i=0;i<l;i++){
        if(s[i]=='L') c1++;
        else if(s[i]=='R') c2++;

        if(c1==c2){
            d1++;
            c1=0;
            c2=0;
        }

    }
    cout<<d1<<endl;

    for(int i=0;i<l;i++){
        if(s[i]=='L') cout<<'L';
        else if(s[i]=='R') cout<<'R';
        if(s[i]=='R' && s[i+1]=='L') cout<<endl;
    }
    
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}