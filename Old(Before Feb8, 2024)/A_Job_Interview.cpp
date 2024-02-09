#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,f=1,c=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='x'){
            f = 0;
            break;
        }
        else if(s[i]=='o'){
            c++;
        }
    }
    if(f && c>=1) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}