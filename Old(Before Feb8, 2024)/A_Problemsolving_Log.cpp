#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string a;
    cin>>a;
    int fr[30]={};
    for(int i=0;i<a.size();i++){
        fr[a[i]-65]++;
    }
    int c = 0;
    for(int i=0;i<26;i++){
        if(fr[i]>=i+1)c++;
       
    }
    cout<<c<<endl;
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}

