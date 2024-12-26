#include <bits/stdc++.h>
using namespace std;
void solve(){
    string a;
    //cin>>a;
    getline(cin,a);
    set<char> aa;
    int  f =0;
    for(int i=0;i<a.size();i++){
        if(a[i]>=97 && a[i]<=122){
            aa.insert(a[i]);
            f = 1;
        }
    }
    if(f) cout<<aa.size();
    else cout<<0<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}