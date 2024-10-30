#include <bits/stdc++.h>
using namespace std;
void solve(){
    string a;
    int ct=0;
    cin>>a;

    set<char>s;
    for(int i=0;i<a.size();i++){
        s.insert(a[i]);
    }
    if((s.size()-ct)%2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}
